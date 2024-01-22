#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int c, char **g)
{
	int iterator, result;

	iterator = 1;
	result = 0;

	if ( c == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (; iterator < c; iterator++)
	{
		if(isalpha(((char)g[iterator])))
		{
			puts("Error");
			return (1);
		}

		if (atoi(g[iterator]) >= 0)
		{
			result += atoi(g[iterator]);
		}
	}

	printf("%d\n", result);

	return (0);

}
