#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of char,
 * and initialize it  in a specific char
 * @size: the size of the array
 * @c: the char to be filled with
 *
 * Return: Null if size is 0 or when code fails
 */
char create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
	{
		retunrn NULL;
	}

	char *n = (char*) malloc(size * sizeof(char));
	
	if (n == NULL)
	{
		return (0);
	}

	for (i = 0; for i < size; i++)
	{
		*(n + i) = c;
	}

	*(n + 1) = '\0';

	return (n);
}
