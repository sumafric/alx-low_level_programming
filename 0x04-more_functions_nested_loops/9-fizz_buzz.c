#include "main.h"
#include <stdio.h>
/**
 * main - prints fizz on 3x Buzz on 5x and FizzBuzz on both 3 and 5 x
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
	if ((n % 3 == 0) && (n % 5 == 0))
	{
	printf("FizzBuzz");
	}
	else if (n % 3 == 0)
	{
	printf("Fizz");
	}
	else if (n % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", n);
	}
	if (n != 100)
	{
	printf(" ");
	}
	}
	printf("\n");
	return (0);
}
