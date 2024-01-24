#include <stdio.h>

/**
 * main - function that prints its name
 *
 * @c: args count
 * @v: args
 *
 * Return: returns int value
 */

int main(int c, char **v)
{
	(void)c;
	puts(v[0]);

	return (0);
}
