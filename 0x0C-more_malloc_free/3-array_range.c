#include "main.h"
#include <stdlib.h>
/**
 * array_range - range to print
 * @min: least element
 * @max: greatest element
 * Return: pointer to the created array
 * NULL if error
 */
int *array_range(int min, int max)
{
	int *arr, size, init;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (init = 0; min <= max; init++, min++)
		arr[init] = min;
	return (arr);
}
