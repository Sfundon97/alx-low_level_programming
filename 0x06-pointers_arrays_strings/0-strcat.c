#include "main.h"
#include <stdio.h>
/**
 * _strcat - function appends the src string to the dest string
 * @dest: this is the destination
 * @src: this is the source
 * Return: string destination
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
	{
		len++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
