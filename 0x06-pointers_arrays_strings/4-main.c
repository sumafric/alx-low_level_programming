#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int j;

    j = 0;
    while (j < n)
    {
        if (j != 0)
        {
            printf(", ");
        }
        printf("%d", a[j]);
        j++;
    }
    printf("\n");
}
