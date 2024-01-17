#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication of two args
 *
 * @c: counts number of args
 * @argv: array of args
 *
 * Return: return int value 0
 */

int main(int c, char **argv)
{
	int result;

	result = 0;

	if (c < 2)
	{
		puts("Error");
		return (1);
	}
	else
	{
		result = atoi(*(argv + 1)) * atoi(*(argv + 2));
		printf("%d\n", result);
	}

	return (0);


}
