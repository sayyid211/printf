#include "main.h"
/**
 * _itoa - casts integers to chars
 * @n: integer to convert
 * Return:char val of n
 */

char *_itoa(int n)
{
	char *c;
	int length, power, val, a, b = 0, i = 1;

	length = n < 0 ? 3 : 2; /* determine length 3 for -ve no and 2 for +ve*/
	b = n < 0 ? 1 : 0;
	n *= n < 0 ? -1 : 1;

	val = n;

	while (val > 9)
	{
		val /= 10;
		length++;
	}
	power = length - 2;
	c = malloc(sizeof(char) * length);
	if (c == NULL)
	{
		exit (1);
	}
	else if (b == 1)
	{
		c[0] = '-';
		power -= 1;
	}
	for (a = 0; a < power; a++)
	{
		i *= 10;
	}
	while (i >= 1)
	{
		c[b] = ((n / i) % 10) + '0';
		i /= 10;
		b++;
	}
	c[b] = '\0';
	return (c);
}
