#include"main.h"
/**
 *_isalpha - function to check for alphabetic character
 *Description: checks whether the character meets the conditions, a-z or A-Z
 *@c: character to be checked
 *Return: 1 if uppercase or lowercase or 0 if not
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
