#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s : String variable
 *
 * Return: length of a string
 *
 */

int _strlen(char *s)
{
	int i = 0, count = 0;

	while (*(s + i) != '\0')
	{
		count++;
		i++;
	}

	return (count);
}
