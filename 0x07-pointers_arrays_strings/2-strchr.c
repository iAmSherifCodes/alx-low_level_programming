#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * _strchr - function that locates a character in a string
 *
 * @s: string variable
 * @c: character to find
 *
 * Return: Pointer to first occurence or NULL
 */

char *_strchr(char *s, char c)
{
	int counter;
	int s_len = (int) strlen(s);

	counter = 0;

	while (counter < s_len)
	{
		if (*(s + counter) == c)
		{
			return (&(*(s + counter)));
		}
		counter++;
	}

	return (NULL);
}
