cmake_minimum_required(VERSION 3.8.0)
project(LearnML_CIS CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(INCLUDE_DIR "./include")
set(SOURCE_DIR "./src")
set(OUTPUT_DIR "./bin")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

include_directories(${INCLUDE_DIR} ./mod/lml/include ./mod/lml/extlib/include ./mod/lml/mod/lml_edk/include ./mod/lml/mod/lml_edk/mod/lml_le/include ./mod/lml/mod/lml_edk/mod/lml_le/mod/lml_pae/include)
file(GLOB_RECURSE SOURCE_LIST ${SOURCE_DIR}/*.cpp)

add_executable(${PROJECT_NAME} ${SOURCE_LIST})

add_subdirectory(./mod/lml)
target_link_libraries(${PROJECT_NAME} LearnML_Core)

install(DIRECTORY ${INCLUDE_DIR}/lml DESTINATION include)
install(TARGETS ${PROJECT_NAME} DESTINATION lib)