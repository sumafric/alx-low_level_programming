#include "main.h"
/**
 * swap_int - Swaps two integers
 * @a: value one
 * @b: value two
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
