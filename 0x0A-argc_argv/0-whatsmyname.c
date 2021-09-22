#include<stdio.h>
/**
 *main - prints its name
 *@argc: counts the number of arguments passed
 *@argv: arrays of pointers to the string arguments from the command line
 *Return: 0
 */
int main(int argc, char* argv[])
{
	int i = 0;
	if (i < argc)
		printf("%s\n", argv[i]);

	return (0);
}
