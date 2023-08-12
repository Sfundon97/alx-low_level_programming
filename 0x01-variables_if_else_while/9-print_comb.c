#include <stdio.h>
/**
 * main - display combination of numbers
 * Return: 0
 */
int main(void)
{
	int j;

	for (j = 48; j < 57; j++)
	{
		putchar(j);
		if (j == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
