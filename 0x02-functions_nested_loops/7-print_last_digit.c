#include "main.h"
/**
 * print_last_digit - Prints last digit of a given integer
 * @num: Given integer
 * Return: Last digit of the given integer
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = -(a % 10);
	}
	else if (a > 0)
	{
		a = a % 10;
	}
	else
	{
		a = 0;
	}
	_putchar(a + '0');
	return (a);
}
