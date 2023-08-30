#include "main.h"
/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to be reversed
 * Return: string in reverse
 */
void _print_rev_recursion(char *s)
{
	_print_rev_recursion(s + 1);
	_putchar(s);
}