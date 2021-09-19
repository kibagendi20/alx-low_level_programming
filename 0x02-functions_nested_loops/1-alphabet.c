#include "main.h"
/**
 *print_alphabet - prints the alphabet in lowercase followed by a new line
 *Description: makes use of _putchar function to print
 *Return: void
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');

}
