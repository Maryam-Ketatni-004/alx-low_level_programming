#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */
void print_number(int n)
{
	unsigned int nb = n;

	if (n < 0)
	{
		_putchar('-');
		nb = -nb;
	}

	if ((nb / 10) > 0)
	{
		print_number(nb / 10);
	}
	_putchar((nb % 10) + '0');
}
