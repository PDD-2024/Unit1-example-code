add_library(geometry SHARED
    geometry.h
    circle.cpp
    rectangle.cpp
    )

target_include_directories(geometry PUBLIC
    ${CMAKE_CURRENT_LIST_DIR})