cmake_minimum_required(VERSION 2.8.12)

PROJECT(8)
SET(CMAKE_CXX_STANDARD 11)

SET(OpenCV_DIR ~/installation/OpenCV/lib/cmake/opencv4/)

if(MSVC)
SET(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
endif()

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

MACRO(add_example name)
	ADD_EXECUTABLE(${name} ${name}.cpp)
	TARGET_lINK_LIBRARIES(${name} ${OpenCV_LIBS})
ENDMACRO()

add_example(8)
