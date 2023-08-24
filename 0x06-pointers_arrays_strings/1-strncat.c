#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @src: source string
 * @dest: destination string
 * @n: the number of bytes from src
 * Return: string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[i++])
	{
		len++;
	}

	for (i = 0; src[i] && i < n; i++)
		dest[len++] = src[i];
	return (dest);
}
