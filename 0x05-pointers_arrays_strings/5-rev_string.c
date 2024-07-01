#include "main.h"
/**
 * str_len - Gets length of the string
 * @str: Pointer to string
 *
 * Return: Length
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
 * rev_string - Reverses string
 * @s: Pointer to string
 *
 */
void rev_string(char *s)
{
	int len;
	int k, l;
	char temp;

	len = str_len(s);
	k = 0;
	l = len;
	while (k < l)
	{
		temp = s[k];
		s[k] = s[l];
		s[l] = temp;
		k++;
		l--;
	}
}
