#include "main.h"
/**
 * _islower - check for the lowercase
 * @c: The character to be checked is c
 * Return: 1 if c is lowercer, otherwise 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
