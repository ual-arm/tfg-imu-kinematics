PROJECT(prueba1)

CMAKE_MINIMUM_REQUIRED(VERSION 2.4)
if(COMMAND cmake_policy)
      cmake_policy(SET CMP0003 NEW)  # Required by CMake 2.7+
endif()

FIND_PACKAGE(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIR})

# Set optimized building:
IF(CMAKE_COMPILER_IS_GNUCXX AND NOT CMAKE_BUILD_TYPE MATCHES "Debug")
	SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")
ENDIF()

# Declare the target (an executable)
ADD_EXECUTABLE(prueba1
	prueba1.cpp
	)

