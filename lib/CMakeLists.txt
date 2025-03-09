project(DesignLib)

include_directories("../include")

file(GLOB_RECURSE sources *.cpp)
file(GLOB_RECURSE headers ../include/*.h)

add_library(DesignLib, STATIC ${sources}, ${headers})