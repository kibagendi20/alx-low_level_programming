#include "main.h"
/**
 *jack_bauer - prints every mimute of the day
 *Return: 0
 *
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			if (i < 10)
			{
				_putchar('0');
				_putchar(i);
			}
			else
				_putchar(i);
			_putchar(':');
			if (j < 10)
			{
				_putchar('0');
				_putchar(j);
			}
			else
				_putchar(j);
		}
	}
}
