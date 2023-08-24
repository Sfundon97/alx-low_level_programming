#include "main.h"
#include <stdio.h>
/**
 * string_toupper - changes lowercase to uppercase
 * @s: the string to be changed
 * Return: pointer of the changed string
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')

			s[i] -= 32;
			i++;
	}
		return (s);
	
}
