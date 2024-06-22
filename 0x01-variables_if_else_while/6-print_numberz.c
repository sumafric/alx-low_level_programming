#include <stdio.h>
/**
 * main - Uses putchar to print digits from zero to nine
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b;

	a = '0';
	b = '9';
	while (a <= b)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
