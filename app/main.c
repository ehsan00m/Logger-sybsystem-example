#include "log.h"
#include "logging_cb.h"

#define LOG_FILE_NAME "./log.txt"

void logTestDebugLvl(void)
{
    log_setLogLevel(LOG_LEVEL_DEBUG);//show all log messeges
    LOG_DEBUG("hello");
    LOG_INFO("hello");
    LOG_WARN("hello");
    LOG_ERROR("hello");
    LOG_CRITICAL("hello");
}

void logTestInfoLvl(void)
{
    log_setLogLevel(LOG_LEVEL_INFO);
    LOG_DEBUG("hello");
    LOG_INFO("hello");
    LOG_WARN("hello");
    LOG_ERROR("hello");
    LOG_CRITICAL("hello");
}

void logTestWarnLvl(void)
{
    log_setLogLevel(LOG_LEVEL_WARN);
    LOG_DEBUG("hello");
    LOG_INFO("hello");
    LOG_WARN("hello");
    LOG_ERROR("hello");
    LOG_CRITICAL("hello");
}

void logTestErrorLvl(void)
{
    log_setLogLevel(LOG_LEVEL_ERROR);
    LOG_DEBUG("hello");
    LOG_INFO("hello");
    LOG_WARN("hello");
    LOG_ERROR("hello");
    LOG_CRITICAL("hello");
}

void logTestCriticalLvl(void)
{
    log_setLogLevel(LOG_LEVEL_CRITICAL);//show all log messeges
    LOG_DEBUG("hello");
    LOG_INFO("hello");
    LOG_WARN("hello");
    LOG_ERROR("hello");
    LOG_CRITICAL("hello");
}
int main (int argc , char ** argv)
{
    initilizeLogFile(LOG_FILE_NAME);

    //sets a callback to log subsystem for saving logs to file(with different log level)
    //logs with level warn,error and critical will save into the file.
    registerWriteToFileCb();

    logTestDebugLvl();
    logTestInfoLvl();
    logTestWarnLvl();
    logTestErrorLvl();
    logTestCriticalLvl();
    
    closeLogFile();
    return 0;
}
