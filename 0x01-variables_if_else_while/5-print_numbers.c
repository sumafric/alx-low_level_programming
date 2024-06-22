#include <stdio.h>
/**
 * main - Print digits from zero to nine
 *
 * Return: 0 (success)
 */
int main(void)
{
	int a, b;

	a = 0;
	b = 9;
	while (a <= b)
	{
		printf("%d", a);
		a++;
	}
	printf("\n");
	return (0);
}
