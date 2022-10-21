#include "main.h"

/**
 * _count - computes length of a string
 * @c: counter
 * @str: string
 */

void _count(int *c, char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		*c += 1;
	}
}
