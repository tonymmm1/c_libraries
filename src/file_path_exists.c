#include <stdio.h>
#include <limits.h>
#include <dirent.h>

/* checks if file path exists */
int file_path_exists(const char filepath[PATH_MAX + 1])
{
	DIR *dp;
	dp = opendir(filepath);
	if (dp)
	{
		closedir(dp);
		return 0;
	}
	else
		return 1;
}
