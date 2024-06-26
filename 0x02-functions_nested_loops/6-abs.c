#include "main.h"
/**
 * _abs - computes absolute value of int
 * @d: num to be computed
 *
 * Return: Absolute value of num/zero
 */
int _abs(int d)
{
	if (d < 0)
	{
	int abs_val;

	abs_val = d * -1;
	return (abs_val);
	}
	return (d);
}

