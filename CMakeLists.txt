cmake_minimum_required(VERSION 3.7.2)
project(http_client CXX)

# Set standard
set (CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build and configure Boost and OpenSSL
set(BeastQuest_BUILD_DEPS ON)

# Build BeastQuest and configure variables
add_subdirectory(beastquest)

# Include header files
include_directories(${BeastQuest_INCLUDEDIR})

# Build http_client and link it with BeastQuest
add_executable(http_client http_client.cc)
target_link_libraries(http_client ${BeastQuest_LIBRARIES})
