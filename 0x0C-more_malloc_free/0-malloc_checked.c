#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates a memory using malloc
 * @b: size to allocate
 *
 * Return: pointer to the allocated memory space
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
