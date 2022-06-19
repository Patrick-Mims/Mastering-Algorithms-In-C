cmake_minimum_required(VERSION 3.23)

set(PROJECT_NAME main)

project(${PROJECT_NAME} VERSION 1.0 LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/609281088cfefc76f9d0ce82e1ff6c30cc3591e5.zip
  )

FetchContent_MakeAvailable(googletest)

include_directories(${PROJECT_SOURCE_DIR}/include/)
include_directories(/usr/local/include/doctest/)

find_package(doctest REQUIRED)
file(GLOB SOURCES "src/*.cxx")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_EXTENSIONS NO)
set(CMAKE_C_FLAGS "{CMAKE_C_FLAGS} --std=c17")

# create an archive file
#add_library(${PROJECT_NAME} STATIC ${SOURCES})

add_executable(${PROJECT_NAME} ${SOURCES})
target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
target_link_libraries(${PROJECT_NAME} PUBLIC doctest::doctest)

#target_link_libraries(${PROJECT_NAME} PUBLIC -L/usr/local/lib -lcurl PRIVATE json-c>
#target_link_libraries(${PROJECT_NAME} PRIVATE doctest::doctest)
#target_link_libraries(${PROJECT_NAME} PUBLIC -L/usr/local/lib -lcurl PRIVATE json-c>
