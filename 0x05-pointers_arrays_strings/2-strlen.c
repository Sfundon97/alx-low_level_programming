#include "main.h"
#include <stddef.h>
/**
 * _strlen - function that returns the length of a string
 * @s: string to  be returned
 * Return: the length
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;
	return (length);
}
