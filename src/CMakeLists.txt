# Copyright (C) 2014-2016 AscEmu Team <http://www.ascemu.org>

# add crashreport tool if we are not on windows
if(UNIX)
   add_subdirectory(crashreport)
endif()

# add our executable related folders
add_subdirectory(shared)
add_subdirectory(logonserver)
add_subdirectory(world)

# if build tools is set, add the subdirectory
if(BUILD_TOOLS)
   add_subdirectory(tools)
endif()
