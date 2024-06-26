#include "main.h"
/**
 * _isalpha - checks for alphbetic characters
 * @d: character to be checked
 *
 * Return: 1 if true else 0
 */
int _isalpha(int d)
{
	int i, j;

	i = 'a';
	j = 'z';
	while (i <= j)
	{
		if (d >= i && d <= j)
		{
			return (1);
		}
		i++;
	}

	i = 'A';
	j = 'Z';

	while (i <= j)
	{
		if (d >= i && d <= j)
		{
			return (1);
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (0);
}
