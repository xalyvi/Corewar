#include "corewar.h"
#include "champion_check.h"

int is_file_ext(char const *file, char const *ext)
{
	size_t  file_len;
	size_t  ext_len;

	file_len = ft_strlen(file);
	ext_len = ft_strlen(ext);

	if (ext_len >= file_len)
		return (0);
	while (ext_len--)
	{
		if (file[--file_len] != ext[ext_len])
			return (0);
	}
	return (1);
}