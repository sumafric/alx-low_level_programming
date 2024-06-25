#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 (success)
 */
int main(void)
{
	int d, i, j;

	for (d = '0'; d < '9'; d++)
	{
	for (i = d + 1; i <= '9'; i++)
	{
	for (j = i + 1; j <= '9'; j++)
	{
	if ((i != d) != j)
	{
	putchar(d);
	putchar(i);
	putchar(j);
	if (d == '7' && i == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
