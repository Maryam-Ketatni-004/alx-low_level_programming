#include "main.h"
/**
* print_last_digit - Prints and returns the last digit of a number.
* @n: number to extract from last digit
* Return: last_digit.
*/
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
	       _putchar(last_digit + '0');
	return (last_digit);
i
