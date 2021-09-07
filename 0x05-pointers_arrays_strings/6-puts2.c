#include"main.h"
/**
 *puts - prints character of a string followed by new line using while loop
 *@str: string whose character will be printed
 *Return: Always 0
 */
void puts2(char *str)
{
	int i = 0;

	while (str)
	{
		_putchar(str[i]);
		_putchar('\n');
		i++;
	}
}
