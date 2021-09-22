#include<stdio.h>
/**
 *main - prints its name
 *@argc: counts the number of arguments passed
 *@argv: arrays of pointers to the string arguments from the command line
 *Return: 0
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
