#include <stdio.h>
/**
 * times_table - prints the timetable nine times
 * Return: empty output
 */
void times_table(void)
{
	int a, b, c, y, z;

	for (a = 0; a <= 9; a++)
	{
	for (b = 0; b <= 9; b++)
	{
	c = a * b;
	if (c > 9)
	{
	y = c % 10;
	z = (c - y) / 10;
	_putchar(44);
	_putchar(32);
	_putchar(z + '0');
	_putchar(y + '0');
	}
	else
	{
	if (b != 0)
	{
	_putchar(44);
	_putchar(32);
	_putchar(32);
	}
	_putchar(c + '0');
	}
	}
	_putchar('\n');
	}
}
