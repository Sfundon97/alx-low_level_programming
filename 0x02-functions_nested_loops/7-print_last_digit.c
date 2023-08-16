#include "main.h"
/**
 * print_last_digit - Prints the last diigit
 * @n: The number to be printed
 * Return: last digit
 */
int print_last_digit(int n)
{
	int lastNo;

	lastNo = n % 10;
	if (lastNo < 0)
	{
		lastNo = lastNo * -1;
	}
	_putchar(lastNo + '0');
	return (lastNo);
}
