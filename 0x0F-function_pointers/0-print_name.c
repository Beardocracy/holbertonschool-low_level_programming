#include "function_pointers.h"

/**
  * print_name - receives a function ptr and string. Sends string to function.
  * @name: string
  * @f: function pointer
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
