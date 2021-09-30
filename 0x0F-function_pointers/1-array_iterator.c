#include"function_pointers.h"
/**
 *array_iterator - Executes a fun pointer passed to it
 *	on each element of an arr
 *@array: array passed
 *@size: size of the array
 *@action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
