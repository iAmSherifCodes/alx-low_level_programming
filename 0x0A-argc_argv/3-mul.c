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
	int first;
	int second;
	int result;

	result = 0;

	if (c < 2)
	{
		puts("Error");
		return (1);
	}
	else
	{
		first = atoi(*(argv + 1));
		second = atoi(*(argv + 2));

		result = first * second;
		printf("%d\n", result);
	}

	return (0);


}
