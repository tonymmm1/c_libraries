#include <stdio.h>
#include <limits.h>
#include <sys/statvfs.h>

/* uses statvfs calls to compare file paths */
int freespace_checker(const char input_filepath[PATH_MAX + 1], const char output_filepath[PATH_MAX + 1])
{
	size_t input_size, output_avail;	
	struct statvfs input_statvfs, output_statvfs;
        if (statvfs(input_filepath, &input_statvfs) != 0)
                return 1;
	if (statvfs(output_filepath, &output_statvfs) != 0)
		return 1;
	
	input_size = input_statvfs.f_blocks - input_statvfs.f_bfree;
	output_avail = output_statvfs.f_bavail * output_statvfs.f_bsize;

	if (output_avail > input_size)
		return 0;
	else
		return 1;
}	
