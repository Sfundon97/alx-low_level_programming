#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - program to determine whether the number is positive or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n > 0)
			{
			printf("%d", n);
			printf(" is positive\n");
			}
		else if (n == 0)
			{
			printf("%d", n);
			printf(" is zero\n");
			}
		else if (n < 0)
			{
			printf("%d", n);
			printf(" is negative\n");
			}
return (0);
}
