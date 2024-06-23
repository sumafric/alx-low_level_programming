#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b, c, d;

	a = '0';
	b = '9';
	c = ',';
	d = ' ';

	while (a <= b)
	{
		if (a < b)
		{
			putchar(a);
			putchar(c);
		}
		else
		{
			putchar(a);
		}
		putchar(d);
		a++;
	}
	return (0);
}
