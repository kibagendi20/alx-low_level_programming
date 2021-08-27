#include <stdio.h>
/**
 * main - uses putchar for printing
 *
 * Description: using the main function
 * this program prints lowercase alphabets in reverse
 * Return: 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
