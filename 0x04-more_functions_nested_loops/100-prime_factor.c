#include <stdio.h>
#include <math.h>
/**
 * main - prints largest number of the numbers 612852475143
 *
 * Return: 0 (success)
 */
int main(void)
{
	long a, maxf;
	long num = 612852475143;
	double square = sqrt(num);

	for (a = 1; a <= square; a++)
	{
	if (num % a == 0)
	{
	maxf = num / a;
	}
	}
	printf("%ld\n", maxf);
	return (0);
}
