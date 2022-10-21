#include "main.h"

void _putstr(char *c)
{
	int i; /* iterator to count string*/
	int size = 0; /* length of string */
	char *dup = NULL;

	while (c[size] != '\0')
		size++; /* compute the size of string c */

	dup = malloc(sizeof(char) * (size + 1));

	if (dup == NULL)
		exit (1); /* exit returning 1 if dup is empty */
	i = 0;
	while (c[i] != '\0')
	{
		dup[i] = c[i];
		i++;
	}
	dup[i] = '\0';
	write(1, dup, size);
	free(dup);
}
