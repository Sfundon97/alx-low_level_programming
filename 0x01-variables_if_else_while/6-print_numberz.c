#include <stdio.h>
/**
 * main - this is an entry point
 * Return: 0
 */
int main(void)
{
        int i;

        for (i = 0; i < 10; i++)
        {
                putchar(i + 48);
        }
        putchar("\n");
        return (0);
}
