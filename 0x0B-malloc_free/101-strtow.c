#include "main.h"


/**
 * _free_grid - free a 2d array
 * @grid: multidimentional array
 * @height: height of array
 *
 * Return: no value
 */
void _free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits string to words
 * @str: string
 *
 * Return: pointer to the array
 * NULL if error
 */
char **strtow(char *str)
{
	char **arr;
	unsigned int c, height, i, j, a1;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	arr = malloc((height + 1) * sizeof(char *));
	if (arr == NULL || height == 0)
	{
		free(arr);
		return (NULL);
	}
	for (i = a1 = 0; i < height; i++)
	{
		for (c = a1; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				a1++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				arr[i] = malloc((c - a1 + 2) * sizeof(char));
				if (arr[i] == NULL)
				{
					_free_grid(arr, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; a1 <= c; a1++, j++)
			arr[i][j] = str[a1];
		arr[i][j] = '\0';
	}
	arr[i] = NULL;
	return (arr);
}
