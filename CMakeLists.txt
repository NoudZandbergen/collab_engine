cmake_minimum_required(VERSION 3.0.0)
project(collab_engine VERSION 0.1.0)

include(CTest)
enable_testing()

# Create the library target
add_library(collab_engine src/collab_engine.cpp)

# Include the private and public headers
target_include_directories(collab_engine PUBLIC include)
target_include_directories(collab_engine PRIVATE "src")

# Add dependencies
set(SFML_BUILD_AUDIO OFF)

add_subdirectory(extern/sfml)
target_include_directories(collab_engine PUBLIC extern/sfml/include)
target_link_libraries(collab_engine LINK_PUBLIC sfml-window sfml-system)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
