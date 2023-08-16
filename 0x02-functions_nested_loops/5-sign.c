#include "main.h"
/**
 * print_sign - prints a sign of the number
 * @c: The character to print
 * Return: + is the number is positive, zero if the number is equal to zero or - if the number is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}


}
