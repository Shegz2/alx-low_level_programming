#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - function
 * @name: inpits
 * @f: onputs
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
