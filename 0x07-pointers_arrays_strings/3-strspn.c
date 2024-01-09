#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: main string
 * @accept: substring
 *
 * Return: length of prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
