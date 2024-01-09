#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: first string
 * @accept: second string
 *
 * Return: pointer to byte
 */

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

