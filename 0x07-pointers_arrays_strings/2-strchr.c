#include "main.h"
/**
 *_strchr - Locates a character in a string
 *@s: string to be searched
 *@c: the character to be located
 *Return: pointer to the first occurence if c is found
 *NULL if c is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*s)
	{
		if (s[i] == c)
			return (s[i]);
		i++;
	}
	return ('\0');
}
