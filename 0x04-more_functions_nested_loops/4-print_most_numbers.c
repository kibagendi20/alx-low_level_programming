#include"main.h"
/**
 * print_most_numbers - prints numbers from 0-9 except 2 and 4
 * Return: no return
 */
void print_most_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2')
			continue;
		else if (i == '4')
			continue;
		else
			_putchar(i);
	}
	_putchar('\n');
}
