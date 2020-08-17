#include <stdio.h>
#include <limits.h>

/* checks if file exists */
int file_exists(const char filepath[PATH_MAX + 1])
{
	FILE *fp;
	fp = fopen(filepath, "r");
	if (!fp)
		return 1;
	fclose(fp);

	return 0;
}
