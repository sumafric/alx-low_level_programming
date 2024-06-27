#include "main.h"
/**
 * print_numbers - print num from 0 to 9
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
