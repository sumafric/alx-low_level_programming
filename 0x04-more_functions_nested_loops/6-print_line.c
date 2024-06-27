#include "main.h"
/**
 * print_line - write a function that draws a line
 *
 * @n: int 
 *
 * Return: void
 */
void print_line(int n)
{
	char a;

	for (a = 0; a < n; a++)
		_putchar('_');
	_putchar('\n');
}
