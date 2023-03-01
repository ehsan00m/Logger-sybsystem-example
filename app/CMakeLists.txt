set(EXEC_NAME ${CMAKE_PROJECT_NAME})
set(EXEC_SOURCES 
    main.c)

add_executable(${EXEC_NAME} ${EXEC_SOURCES})
target_link_libraries(${EXEC_NAME} PUBLIC LOG_LIB) 