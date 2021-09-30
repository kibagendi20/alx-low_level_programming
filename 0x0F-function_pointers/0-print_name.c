#include"function_pointers.h"
/**
 *print_name - prints name
 *@name: name of the person
 *@f: A pointer to a function that prints name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
