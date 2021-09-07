cmake_minimum_required (VERSION 3.0)
project(Lux)

# Well, first of all, disable some harmless warnings, which are really
# hard to get rid off (they are overall in the code).
set(CMAKE_CXX_FLAGS ${CMAKE_CXX_FLAGS}
  "-Wno-switch -Wno-undefined-var-template -Wno-extern-c-compat")

set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR})
OPTION(USERDIR_RESOURCES "Allow using local userdirectory resources" ON)
set(MACOSX_BUNDLE_COPYRIGHT "Copyright © 2010-2013 Frictional Games")

add_subdirectory(../../HPL2/core core2)

if(USERDIR_RESOURCES)
    add_definitions(
        -DUSERDIR_RESOURCES
    )
endif()

set(VERSION "1.3.1")

add_subdirectory(game game)

add_custom_target(GameRelease
    DEPENDS Amnesia
)

install (TARGETS Amnesia RUNTIME
         DESTINATION bin)
