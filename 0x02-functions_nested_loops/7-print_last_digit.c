#include "main.h"
/**
 * print_last_digit - Prints last digit of a given integer
 *
 * Return: Last digit of int
 */
int print_last_digit(int n)
{
	int last;

	last  = n % 10;
	if (last < 0)
	{
	last = last * -1;
	}
	_putchar(last + 'a');
	return (last);
}
