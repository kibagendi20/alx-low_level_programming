#include "main.h"
/**
 *swap_int - swaps value of two integers
 *@a: integer to be swapped with b
 *@b: integer to be swapped with a 
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	a* = *b;
	*b = tmp;
}
