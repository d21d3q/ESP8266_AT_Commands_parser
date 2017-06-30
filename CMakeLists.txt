cmake_minimum_required (VERSION 2.6)
project(ESP8266_AT_Commands_parser)



set(ESP8266_LIBRARY_PATH ${CMAKE_CURRENT_SOURCE_DIR}/00-ESP8266_LIBRARY)

include_directories(${ESP8266_LIBRARY_PATH})

set (ESP8266_LIBRARY_HEADERS
    ${ESP8266_LIBRARY_PATH}/buffer.h
    ${ESP8266_LIBRARY_PATH}/esp8266.h
    )

set (ESP8266_LIBRARY_SOURCES
    ${ESP8266_LIBRARY_PATH}/buffer.c
    ${ESP8266_LIBRARY_PATH}/esp8266.c
    )

enable_testing()

add_subdirectory(tests)
