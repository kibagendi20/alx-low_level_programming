#include"main.h"
/**
 *_islower - checks whether a character is lower case
 *@c: the character to be checked
 *Description: tests condition whenther to determine
 *Return: 1 or 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
