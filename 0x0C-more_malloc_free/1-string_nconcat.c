#include "main.h"
#include <stdlib.h>

/**
 * _strlen - get length of string
 * @s: the string address
 *
 * Return: Size of string
 */
int _strlen(char *s)
{
	unsigned int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}

/**
 * string_nconcat - concatenate n bytes of a string
 * @s1: first string
 * @s2: second string
 * @n: bytes to copy from s2
 *
 * Return: pointer to the concatenated string
 * NULL if fail
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, lenc, i, j;
	char *str;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = _strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = _strlen(s2);
	if (n >= len2)
		lenc = len2;
	else
		lenc = n;

	str = malloc(sizeof(char) * (len1 + lenc + 1));

	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < lenc; j++, i++)
		str[i] = s2[j];
	str[i] = '\0';
	return (str);
}
