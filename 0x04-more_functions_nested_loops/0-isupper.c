#include"main.h"
/**
 *_isupper: checks for uppercase
 *@c: int parameter for the function
 *Return: 0
 *Description: checks for uppercase and returns either 0 or 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
