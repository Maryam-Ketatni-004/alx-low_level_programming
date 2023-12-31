#include "main.h"

/**
 * factorial - function declaration
 * @n: the number
 * Return: factorial of n or -1
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else
	{
		return (1);
	}
}
