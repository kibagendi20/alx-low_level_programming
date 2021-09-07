#include"main.h"
/**
 *puts - prints character of a string followed by new line using while loop
 *@str: string whose character will be printed
 *Return: Always 0
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str++);
		_putchar('\n');
	}
}
