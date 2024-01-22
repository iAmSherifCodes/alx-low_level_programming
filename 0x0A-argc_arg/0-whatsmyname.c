#include "main.h"
#include <stdio.h>

/**
 * main - function that prints the name of the file
 *
 * @argc: first argument that the count of args
 * @argv: an array of pointers to the args
 *
 * Return: an integer is returned
 */

int main(int argc, char **argv)
{
	int len;
	
	len = 0;

	while (**argv != '\n')
	{
		len++;
		--**argv;
	}

	for (int i = 0; i <=len; i++)
	{
		_putchar(*argv[0]);
	}

	return (0);
}
