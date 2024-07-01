#include "main.h"
/**
 * str_len - Gets length of string
 * @str: pointer to string
 *
 * Return: length
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
 * puts2 - string incremented by 2
 * @str: Pointer to printed string
 *
 * Return: empty
 */
void puts2(char *str)
{
	int a;
	int len;

	len = str_len(str);
	for (a = 0; a <= len; a++)
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
	}
	_putchar('\n');
}
