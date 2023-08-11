#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* program to determine whether the number is positive or negative */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		if (n > 0)
			{
			printf("%d", n);
			printf("\tis positive\n");
			}
		else if (n == 0)
			{
			printf("%d", n);
			printf("\tis zero\n");
			}
		else if (n < 0)
			{
			printf("%d", n);
			printf("\tis negative\n");
			}
return (0);
}
