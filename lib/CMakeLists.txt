set(LIBRARY_NAME LOG_LIB)
set(LIBRARY_SOURCES
    "src/log.c")
set(LIBRARY_HEADERS
    "./inc")

add_library(${LIBRARY_NAME} STATIC ${LIBRARY_SOURCES})
target_include_directories( ${LIBRARY_NAME} PUBLIC ${LIBRARY_HEADERS})
