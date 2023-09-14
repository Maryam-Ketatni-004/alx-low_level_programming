#include "main.h"
/**
* print_alphabet_x1 - prints teen times the alphabet
*
* Return: alwyas void
*/
void print_alphabet_x10(void)
{
	char ch;

	for (ch = 48; ch <= 57; ch++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
		_putchar('\n');
	}
}
