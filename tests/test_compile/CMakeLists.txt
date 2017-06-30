add_test(NAME TestCompile COMMAND doTest)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(doTest main.c
               ${ESP8266_LIBRARY_SOURCES}
               ${ESP8266_LIBRARY_HEADERS}
               esp8266_ll.h
               esp8266_ll.c
               esp8266_config.h)
