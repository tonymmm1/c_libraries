/* Example header file for C Libraries */
#ifndef LIBRARIES_H
#define LIBRARIES_H

#include "file_exists.c"
#include "file_path_exists.c"
#include "file_path_freespace.c"

#define ARG_MAX 2097152 /* sets max length for system shell arguments */
/* typedef const char filepath[PATH_MAX + 1]; */ /* optional type for filepaths */

/* file_exists.c */
int file_exists(const char filepath[PATH_MAX + 1]);

/* file_path_exists.c */
int file_path_exists(const char filepath[PATH_MAX + 1]);

/* file_path_freespace.c */
int file_path_freespace(const char input_filepath[PATH_MAX + 1], const char output_filepath[PATH_MAX + 1]);

#endif
