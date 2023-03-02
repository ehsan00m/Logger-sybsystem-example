#include <time.h>
#include <stdio.h>
#include "log.h"
#include "logging_cb.h"

static FILE * log_fd;

/**
 * @brief creates a file for storing log messeges.
 * 
 * @param file_name 
 * @return int 
 * @retval [-1] in case of failure.
 * @retval [0]  in case of success.
 */
int initilizeLogFile(const char * file_name)
{
    log_fd = fopen(file_name, "a");
    if (log_fd < 0 )
    {
        LOG_ERROR("log file creation failed");
        return -1;
    }
    else
    {
        LOG_INFO("log file created");
        return 0;
    }
}


static void flushLogFile(void)
{
    fflush(log_fd);
}

static void writeToFileCb(log_logLevel_t level, const char * const func_name, const char * const format, va_list args)
{
    fprintf(log_fd, " [%s] [%s]:", log_getLevelString(level), func_name);
    vfprintf(log_fd, format, args);
    fprintf(log_fd, "\n");
    flushLogFile();
}

void registerWriteToFileCb(void)
{
    //save log messages with log level warn and higher to the file
    log_registerCallback(writeToFileCb,LOG_LEVEL_WARN);
}

void closeLogFile(void)
{
    fclose (log_fd);
}
