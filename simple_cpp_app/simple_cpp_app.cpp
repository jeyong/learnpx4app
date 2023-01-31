

/**
 * @file simple_c_app.c
 * Minimal application example for PX4 autopilot
 */

// #include <px4_platform_common/px4_config.h>
#include <px4_platform_common/log.h>
// #include <px4_platform_common/tasks.h>
// #include <px4_platform_common/posix.h>
// #include <unistd.h>
// #include <stdio.h>
// #include <poll.h>
// #include <string.h>
// #include <math.h>


extern "C" __EXPORT int simple_cpp_app_main(int argc, char *argv[]);

int simple_cpp_app_main(int argc, char *argv[])
{
	PX4_INFO("Hello World!");
	return 0;
}
