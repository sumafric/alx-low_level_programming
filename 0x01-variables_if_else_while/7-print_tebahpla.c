#include <stdio.h>
/**
 * main - Alphabets in reverse
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
		putchar(z);
		z--;
	}
	putchar('\n');
	return (0);
}
