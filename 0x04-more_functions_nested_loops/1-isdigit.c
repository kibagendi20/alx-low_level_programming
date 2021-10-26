#include"main.h"
/**
 * _isdigit - checks whether arg passed range from 0-9
 * @c: arg passed
 * Return: either 1 if digit otherwise 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
