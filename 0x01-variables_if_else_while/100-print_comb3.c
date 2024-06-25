#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 (sucess)
 */
int main(void)
{
	int d, i;

	for (d = '0'; d <= '9'; d++)
	{

	for (i = d + 1; i <= '9'; i++)
	{
	if (i != d)
	{
	putchar(d);
	putchar(i);
	if (d == '8' && i == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
