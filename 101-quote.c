#include <unistd.h>

/**
 * main - prints a text
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 20
			15-10-19\n", 59);

	return (1);
}