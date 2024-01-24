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
	(void) c;
	(void) v;
	printf("%s\n", __FILE__);

	return (0);
}
