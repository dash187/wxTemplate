file(GLOB_RECURSE sources CONFIGURE_DEPENDS "*.cpp")

add_executable(wxTemplate WIN32 ${sources})