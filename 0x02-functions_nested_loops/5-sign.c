#include "main.h"
/**
 * print_sign - Print sign of a number
 *
 * @n: number to be checked
 *
 * Return: 0 if number is zero 1 if num >  0 else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	else if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
