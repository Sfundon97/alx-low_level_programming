#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compare strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 * Return: unmached characters
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
