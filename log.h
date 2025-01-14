#pragma once

#include "ggformat.h"
#include "platform_backtrace.h"

#define INFO( form, ... ) ggprint_to_file( stdout, "[INFO] " form "\n", ##__VA_ARGS__ )
#define WARN( form, ... ) ggprint_to_file( stderr, "[WARN] " form "\n", ##__VA_ARGS__ )
#define FATAL( form, ... ) \
	do { \
		ggprint_to_file( stderr, "[FATAL] " form "\n", ##__VA_ARGS__ ); \
		print_backtrace_and_abort(); \
	} while( 0 )
