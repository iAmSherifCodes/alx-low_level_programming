#include "main.h"

/**
 * _strncpy - function that copies string
 * @dest: copy to
 * @src: copy from
 * @n: number of string to be copied
 *
 * Return: pointer to the modified string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
