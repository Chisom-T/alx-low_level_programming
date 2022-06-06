#include "function_pointers.h"

/**
 * print_name - prints the name
 * @name: function argument
 * @f: function argument
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
