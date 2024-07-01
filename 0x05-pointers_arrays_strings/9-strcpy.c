#include "main.h"
/**
 * str_len - Gets length of a string
 * @str: Pointer to the string
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
	return (len);
}
/**
 * _strcpy - Copy string from src to dest
 * @src: Sources
 * @dest: destination
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, len;

	len = str_len(src);
	for (a = 0; a < len && *src != '\0'; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
