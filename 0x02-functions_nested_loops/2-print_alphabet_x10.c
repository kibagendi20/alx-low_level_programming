#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times alphabets in lowercase
 * Description: employs nested loops
 * Return: no return value (void)
 */
void print_alphabet_x10(void)
{
	int i = 1;
	int ch;

	while (i <= 10)
	{
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	i++;
	}
}
