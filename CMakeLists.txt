# Set CMake Minimum
cmake_minimum_required(VERSION 3.12)

# Declares this as a cross-compilation project for AVR architecture
## Generic system means no OS-specific features will be assumed
set(CMAKE_SYSTEM_NAME Generic)
set(CMAKE_SYSTEM_PROCESSOR avr)

# Sets path to Arduino AVR core files
## set(ARDUINO_AVR_PATH "D:/DEV/LIBS/embedded/arduino-avr") # -> Explicitly
### Or by using System Environment Variables in Windows
set(ARDUINO_AVR_PATH "$ENV{ARDUINO_AVR_PATH}") 

# Recursively finds all C/C++ source files in Arduino core directory
file(GLOB_RECURSE ARDUINO_CORE_SOURCES 
    "${ARDUINO_AVR_PATH}/cores/arduino/*.c"
    "${ARDUINO_AVR_PATH}/cores/arduino/*.cpp"
)

# Arduino core library
add_library(arduino-core STATIC ${ARDUINO_CORE_SOURCES})
target_include_directories(arduino-core PUBLIC
    "${ARDUINO_AVR_PATH}/cores/arduino"         
    "${ARDUINO_AVR_PATH}/variants/standard"    
)

# Sets AVR-specific compiler flags:
target_compile_options(arduino-core PRIVATE
    -mmcu=atmega328p        # Target microcontroller
    -DF_CPU=16000000UL      # Clock frequency definition
    -Os                     # Optimize for size
)

# My library
add_library(ArduinoBahasa 
    examples/KodeArduino.cpp
    src/ArduinoBahasa.h 
    src/ArduinoBahasa.cpp
)

set(SOURCE_FILES
  src/main.cpp
)

target_include_directories(ArduinoBahasa PUBLIC 
    ${CMAKE_CURRENT_SOURCE_DIR}/src  # For local includes
    ${CMAKE_CURRENT_SOURCE_DIR}/examples  # For local includes
    "${ARDUINO_AVR_PATH}/cores/arduino"   # Explicitly add Arduino includes for IntelliSense
)
target_link_libraries(ArduinoBahasa PUBLIC arduino-core)

# Defines main project name, version, and languages (C/C++)
project(ArduinoAVR VERSION 0.1.0 LANGUAGES C CXX)

# Creates executable from main.cpp
add_executable(${PROJECT_NAME} ${SOURCE_FILES})
target_link_libraries(${PROJECT_NAME} PRIVATE ArduinoBahasa)
target_compile_options(${PROJECT_NAME} PRIVATE
    -mmcu=atmega328p
    -DF_CPU=16000000UL
)











# Post-build step to generate HEX file using avr-objcopy
add_custom_command(TARGET ArduinoAVR POST_BUILD
    COMMAND avr-objcopy 
    -O ihex                 # Output in Intel HEX format
    -R .eeprom              # Exclude EEPROM section
    $<TARGET_FILE:ArduinoAVR> ${PROJECT_NAME}.hex
)