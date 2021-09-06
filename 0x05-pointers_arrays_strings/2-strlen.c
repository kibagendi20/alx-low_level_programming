#include "main.h"
/**
 *_strlen - return the length of the string variable passed
 *@s: pointer to the string variable
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		s++;
		len++
	}

	return (len);
}
