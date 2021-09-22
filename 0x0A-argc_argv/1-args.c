#include<stdio.h>
/**
 *main - prints its name
 *@argc: counts the number of arguments passed
 *@argv: arrays of pointers to the string arguments from the command line
 *Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
