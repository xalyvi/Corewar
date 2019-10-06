#include "corewar.h"
#include "test.h"

char	**pushArgs(char *line)
{
	return ft_strsplit(line, ' ');
}

int		validArg()
{
	char	*fun = "validArgs()";
	char	*arg = "file.cor";

	if (!is_file_ext(arg, ".cor"))
	{
		error_e(fun, arg);
		return (1);
	}
	return (0);
}

int		validArgs()
{
	char	*fun = "validArgs()";
	char	**args = pushArgs("file.cor middle.cor test.cor");

	while (*args != 0)
	{
		if (!is_file_ext(*args, ".cor"))
		{
			error_e(fun, *args);
			return (1);
		}
		args++;
	}
	return (0);
}

void	start_parsingTest()
{
	int	res = 0;
	if (validArg())
		res = 1;
	if (validArgs())
		res = 1;
	if (res == 0)
		printf("parsingTest: " GRN "SUCESS" RESET "\n");
	else
		printf("parsingTest: " RED "FAILURE" RESET "\n");
}