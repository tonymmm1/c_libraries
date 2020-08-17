#include <stdio.h>
#include <limits.h>
#include <sys/stat.h>

int file_path_creator(const char filepath[PATH_MAX + 1])
{
	if (mkdir(filepath, 0750)) /* makes directory filepath */
		return 1;

	return 0;
}
