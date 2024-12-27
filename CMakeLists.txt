cmake_minimum_required(VERSION 3.24)
project(wxTemplate VERSION 3.0)

set(wxWidgets_ROOT_DIR "$ENV{WXWIN}")
find_package(wxWidgets REQUIRED COMPONENTS net core base)
if(wxWidgets_USE_FILE) # not defined in CONFIG mode
    include(${wxWidgets_USE_FILE})
endif()

add_subdirectory(source)
target_link_libraries(wxTemplate ${wxWidgets_LIBRARIES})

configure_file(ProjectConfig.h.in ProjectConfig.h)
target_include_directories(wxTemplate PUBLIC include)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)