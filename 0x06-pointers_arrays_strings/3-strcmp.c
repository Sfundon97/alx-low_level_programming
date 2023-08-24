#include "main.h"
#include <stdio.h>
/**
 * _strcmp - 
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 * Return: unmached characters
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
