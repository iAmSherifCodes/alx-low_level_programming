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
