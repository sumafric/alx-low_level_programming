#include "main.h"
/**
 * _isupper - Check whether the Alphabet is uppercase
 * @c: Variable text
 * Return: 1 for uppercase o for anything else
 */
int _isupper(int c)
{
if ((c >= 'A') && (c <= 'Z'))
return (1);

return (0);
}
