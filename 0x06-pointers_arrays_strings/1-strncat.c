#include "main.h"

/**
 * _strncat - function that concat two strings with byte
 *
 * @dest: string to copy to
 * @src: string to copy from
 * @n: number of byte
 *
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int size;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	for (size = 0; size < n; size++)
	{
		dest[dest_len + size] = src[size];
		if (src[size] == '\0')
			size = n;
	}

	return (dest);
}
