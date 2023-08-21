#include "main.h"
/**
 * _atoi - convert string to integer
 * @s: string to be converted
 * Return: an integer
 */
int _atoi(char *s)
{
	int i = 0, min = 1, isi = 0;
	unsigned int n = 0;

	while (s[i])
	{
		if (s[i] == 45)
		{
		min *= -1;
		}
		while (s[i] >= 48 && s[i] <= 57)
		{
		isi = 1;
		n = (n * 10) + (s[i] - '0');
		i++;
		}
		if (isi == 1)
		{
			break;
		}
		i++;
	}
	return (n);
}
