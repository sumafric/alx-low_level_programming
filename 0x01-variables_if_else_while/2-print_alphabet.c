#include <stdio.h>
/**
 * main - Print alphabets
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
	putchar('\n');
	return (0);
}
