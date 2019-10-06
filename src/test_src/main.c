#include "test.h"

void	error_e(char *fun, char *message)
{
	printf("%s: \"%s\"\n", fun, message);
}

int main(void)
{
    start_parsingTest();
    return 0;
}
