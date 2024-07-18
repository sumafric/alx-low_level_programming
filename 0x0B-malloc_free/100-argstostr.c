#include "main.h"
#include <stdlib.h>

/**
 * argstostr - convert args to string
 * @ac: argument count
 * @av: argument string
 *
 * Return: string pointer
 * NULL if error
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, a = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			len++;
			j++;
		}
	}
	len += (ac + 1);
	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[a] = av[i][j];
			a++;
			j++;
		}
		str[a] = '\n';
		a++;
	}
	return (str);
}
