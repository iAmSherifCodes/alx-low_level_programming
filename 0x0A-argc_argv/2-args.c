#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @c: count of args
 * @arr: array of args
 *
 * Return: returns an int
 */

int main(int c, char **arr)
{
	int iterator;

	iterator = 0;

	for (; iterator < c; iterator++)
	{
		printf("%s\n", *(arr + iterator));
	}

	return (0);
}
