#include <stdio.h>
/**
 * main - display combination of numbers
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 0; j <= 10; j++)
	{
		putchar(j + '0');
		if (j < 10)
		{
			putchar(',');
		       	putchar(' ');
		}
	}
	return (0);
}
