#include "corewar.h"

int main(int argc, char const *argv[])
{
	if (argc > 1)
	{
		parse_args_corewar(argc - 1, argv + 1);
	}
	// else
	// 	write_help();
	return 0;
}
