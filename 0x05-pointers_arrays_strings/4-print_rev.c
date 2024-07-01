#include "main.h"
/**
 * str_len - gets length of string
 * @str: Pointer to string
 * Return: Length of the string
 */
int str_len(char *str)
{
	int len;

	len = 0;
	while (*str != '\0')
	{
		len++;
		str++;
	}
	return (len - 1);
}
/**
 * print_rev - Displays string reverse
 * @s: String to be printed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int len;
	int a;

	len = str_len(s);
	for (a = len; a >= 0; a--)
	{
		if (*s != '\0')
		{
			_putchar(s[a]);
		}
	}
	_putchar('\n');
}
