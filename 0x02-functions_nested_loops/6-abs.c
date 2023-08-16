#include "main.h"
/**
 * _abs - Compute an integer
 * @n - number to be computed
 * Return: number or zero
 */
int _abs(int n)
{
	int abs_value;

	if (n < 0)
	{
		abs_value = n * -1;
		return (abs_value);
	}
	else
	{
		return (n);
	}
}
