#include"main.h"
/**
 *_strcat - concantenates two strings
 *@dest: first string that concatenates the other string
 *@src: the second string that gets concatenates
 *Return: pointer to the first string, dest
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}
