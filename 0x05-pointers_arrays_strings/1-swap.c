#include "main.h"
/**
 * swap_int - the numbers to be swaped
 * @a: first number
 * @b: second number
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int temporary = *a;
	*a = *b;
	*b = temporary;
}
