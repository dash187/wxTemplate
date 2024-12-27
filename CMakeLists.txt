cmake_minimum_required(VERSION 3.24)
project(wxTemplate VERSION 3.0)
add_executable(wxTemplate WIN32 main.cpp)

set(wxWidgets_ROOT_DIR "$ENV{WXWIN}")
find_package(wxWidgets REQUIRED COMPONENTS net core base)
if(wxWidgets_USE_FILE) # not defined in CONFIG mode
    include(${wxWidgets_USE_FILE})
endif()

configure_file(ProjectConfig.h.in ProjectConfig.h)
target_include_directories(wxTemplate PUBLIC ${PROJECT_BINARY_DIR})
target_link_libraries(wxTemplate ${wxWidgets_LIBRARIES})

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
