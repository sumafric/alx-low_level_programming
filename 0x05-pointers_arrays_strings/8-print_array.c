#include "main.h"
#include <stdio.h>
/**
 * print_array - Prints n elements of an Array
 * @a: pointer to integer
 * @n: Number of elments
 *
 */
void print_array(int *a, int n)
{
	int y, x;

	if (n > 0)
	{
		x = n - 1;
		for (y = 0; y < x; y++)
		{
			printf("%d, ", a[y]);
		}
		printf("%d\n", a[x]);
	}
	else
	{
		printf("!\n");
	}
}
