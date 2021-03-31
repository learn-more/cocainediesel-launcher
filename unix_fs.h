#pragma once

#include <errno.h>
#include <unistd.h>
#include <sys/stat.h>

inline FILE * open_file( const char * path, const char * mode ) {
	return fopen( path, mode );
}

inline bool rename_replace( const char * old_path, const char * new_path ) {
	return rename( old_path, new_path ) == 0;
}

inline bool change_directory( const char * path ) {
	return chdir( path ) == 0;
}

inline bool make_directory( const char * path ) {
	bool ok = mkdir( path, 0755 ) == 0 || errno == EEXIST;
	return ok;
}

inline bool remove_file( const char * path ) {
	return unlink( path ) == 0;
}

inline bool remove_directory( const char * path ) {
	return rmdir( path ) == 0;
}

inline bool mark_executable( FILE * f ) {
	int fd = fileno( f );
	ASSERT( fd != -1 );
	return fchmod( fd, 0755 ) == 0;
}
