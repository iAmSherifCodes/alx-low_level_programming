#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string
 * @s: string to be printed
 *
 */

void print_rev(char *s)
{
	int length;
       
	length = strlen(s);

	while (length >= 0)
	{
		putchar(*(s + length));
		length--;
	}
	puts("\n");
}
