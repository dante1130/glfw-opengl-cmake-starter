add_executable(Application)

set_target_properties(Application PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    CXX_EXTENSIONS NO
)

target_compile_options(Application PRIVATE
    $<$<CXX_COMPILER_ID:Clang,AppleClang,GNU>:-Wall -Wextra -Wpedantic -Werror>
    $<$<CXX_COMPILER_ID:MSVC>:/W4 /WX>
)

target_sources(Application PRIVATE
    main.cpp
)

target_link_libraries(Application PRIVATE
    glfw
    glad
)

