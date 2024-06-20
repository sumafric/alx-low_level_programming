#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: 1
 */
int main(void)
{
	char text[] = "and that piece of art is useful\" - Dora Korpar, \
2015-10-19\n";
	ssize_t ret = write(2, text, sizeof(text) - 1);

	if (ret != sizeof(text) - 1)
	{
		return (0);
	}
	return (1);
}
