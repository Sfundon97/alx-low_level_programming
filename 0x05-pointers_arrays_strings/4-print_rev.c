#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: string to  be printed
 * ReturN: VOID
 */
void print_rev(char *s)
{
	int n = 0;
	
	while (s[n] != '\n')
	{
		n++;
	}
	for (n -= 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
