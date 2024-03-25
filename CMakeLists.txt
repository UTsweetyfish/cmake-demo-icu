cmake_minimum_required(VERSION 3.5)
project(ICU_Example)

# Find the ICU package
find_package(ICU COMPONENTS i18n)

# Set the source files
set(SOURCES my_library.cpp)


# Create a shared library
add_library(ICU_Lib SHARED ${SOURCES})


target_link_libraries(ICU_Lib ICU::i18n)
