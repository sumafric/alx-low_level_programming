#include <stdio.h>
/**
 * main - Prints alphabet in lower to uppercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, z;

	a = 'a';
	z = 'z';
	while (a <= z)
	{
		putchar(a);
		a++;
	}
	a = 'A';
	z = 'Z';
	while (a <= z)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
