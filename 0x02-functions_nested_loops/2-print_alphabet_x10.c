#include "main.h"
/**
 * print_alphabet_x10 - Print alphabet ten times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i, a, j;

	i = 0;
	while (i <= 9)
	{
		a = 'a';
		j = 'z';
		while (a <= j)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
