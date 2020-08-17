[![Build Status](https://drone.magnatox.com/api/badges/tonymmm1/c_libraries/status.svg?ref=refs/heads/master)](https://drone.magnatox.com/tonymmm1/c_libraries)

# C Libraries

Libraries to use with C programs.

Functions will return 0 on success and 1 on error, unless otherwise specified.

Example header can be found in the /include directory. 

## [FILE]
- [int file_exists(const char filepath[PATH_MAX + 1])](https://git.magnatox.com/tonymmm1/c_libraries/src/branch/master/src/file_exists.c) - checks if file exists

- [int file_path_exists(const char filepath[PATH_MAX + 1])](https://git.magnatox.com/tonymmm1/c_libraries/src/branch/master/src/file_path_exists.c) - checks if file path exists

- [int file_path_freespace(const char input_filepath[PATH_MAX + 1], const char output_filepath[PATH_MAX + 1])](https://git.magnatox.com/tonymmm1/c_libraries/src/branch/master/src/file_path_freespace.c) - checks if output file path has enough freespace

- [int file_path_creator(const char filepath[PATH_MAX + 1])](https://git.magnatox.com/tonymmm1/c_libraries/src/branch/master/src/file_path_creator.c) - creates file path
