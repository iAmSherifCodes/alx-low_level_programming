#include "main.h"

/**
 * _strlen - function that get the length of a string
 * @str: string to check
 *
 * Return: length of the string
 */

int _strlen(char *str)
{
	int str_len = 0;

	while (*(str + str_len) != '\0')
	{
		str_len++;
	}

	return (str_len);
}

/**
 * _strcat - function that concatenates two strings
 * @dest: copy to
 * @src: copy from
 *
 * Return: two concat strings
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = _strlen(dest);
	int src_len = 0;

	while (*(src + src_len) != '\0')
	{
		*(dest + dest_len)  = *(src + src_len);
		dest_len++;
		src_len++;
	}

	*(dest + dest_len) = '\0';

	return (dest);
}
