#include "main.h"
/**
 * str_len - Gets length of string
 * @s: Poiter to string
 *
 * Return: Length
 */
int str_len(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
 * puts_half - Prints last half of string
 * @str: Pointer to string
 */
void puts_half(char *str)
{
	int len;
	int l_half = 0;
	int a, b;

	len = str_len(str);
	if (len % 2 == 0)
	{
		l_half = len / 2;
		for (a = l_half; a <= len; a++)
		{
			if (*str != '\0')
				_putchar(str[a]);
		}
	}
	else
	{
		l_half = (len - 1) / 2;
		for (b = l_half; b <= len; b++)
		{
			if (*str != '\0')
				_putchar(str[b]);
		}
	}
	_putchar('\n');
}
