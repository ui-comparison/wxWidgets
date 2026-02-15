# Add source to this project's executable.
add_executable (01-HelloWorld WIN32 "01-HelloWorld.cpp" "01-HelloWorld.h" "HelloFrame.cpp" "HelloFrame.h")

find_package(wxWidgets COMPONENTS core base)

target_include_directories(01-HelloWorld PRIVATE ${wxWidgets_INCLUDE_DIRS})
target_link_libraries(01-HelloWorld PRIVATE ${wxWidgets_LIBRARIES})
target_compile_definitions(01-HelloWorld PRIVATE ${wxWidgets_DEFINITIONS})

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET 01-HelloWorld PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
