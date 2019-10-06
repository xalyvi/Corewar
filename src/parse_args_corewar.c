#include "corewar.h"

static void    parse_champion(char const *champion)
{
	ft_putendl(champion);
}

void    parse_args_corewar(int argc, char const **argv)
{
	while (argc)
	{
		if (is_file_ext(*argv, ".cor"))
			parse_champion(*argv);
		argv++;
		argc--;
	}
}