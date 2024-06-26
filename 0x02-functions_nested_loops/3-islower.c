#include "main.h"
/**
 * _islower - checks for character in lowercase
 * @d: character in check
 * Return: 1 for lowercase 0 for anything else
 */
int _islower(int d)
{
	if (d >= 97 && d <= 122)
	{
	return (1);
	}
	return (0);
}
