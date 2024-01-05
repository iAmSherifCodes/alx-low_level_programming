#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: two concat strings
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;

	while (*(dest + dest_len) != '\0')
	{
		dest_len++;
	}

	while (*(src + src_len) != '\0')
	{
		*(dest + dest_len)  = *(src + src_len);
		dest_len++;
		src_len++;
	}

	*(dest + dest_len) = '\0';

	return (dest);
}
