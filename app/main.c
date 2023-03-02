#include "log.h"
#include "logging_cb.h"

#define LOG_FILE_NAME "./log.txt"

void simpleLogTest(void)
{
    LOG_DEBUG("hello");
    LOG_INFO("hello");
    LOG_WARN("hello");
    LOG_ERROR("hello");
    LOG_CRITICAL("hello");
}

int main (int argc , char ** argv)
{
    log_setLogLevel(LOG_LEVEL_DEBUG);//show all log messeges 
    initilizeLogFile(LOG_FILE_NAME);

    //sets a callback to log subsystem for saving logs to file(with different log level)
    //logs with level warn,error and critical will save into the file.
    registerWriteToFileCb();

    simpleLogTest();
    
    return 0;
}
