#include <stdio.h>
#include <stdlib.h>
/**
 * *malloc_checked - alloccates memory using malloc
 * @b: the first variable
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (p);
}
