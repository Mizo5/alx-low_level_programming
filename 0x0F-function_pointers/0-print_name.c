#include "function_pointers.h"

/**
 * print_name - Prints a name using a function pointer.
 * @name: The name to be printed.
 * @f: Pointer to the function that formats and prints the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
