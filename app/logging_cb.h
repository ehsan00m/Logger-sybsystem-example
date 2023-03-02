#ifndef __LOGGING_CB_H
#define __LOGGING_CB_H

#ifdef __cplusplus
extern "C" {
#endif
/**
 * @brief creates a file for storing log messeges.
 * 
 * @param file_name 
 * @return int 
 * @retval [-1] in case of failure.
 * @retval [0]  in case of success.
 */
int initilizeLogFile(const char * file_name);

/**
 * @brief registers a callback to the logging subsystem,
 * that saves log messages with log level warn and higher to the file
 * 
 */
void registerWriteToFileCb(void);

void closeLogFile(void); 

#ifdef __cplusplus
}
#endif

#endif//__LOGGING_CB_H