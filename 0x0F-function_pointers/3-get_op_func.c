#include "calc.h"
#include <stdlib.h>

/**
  * get_op_func - selects the correct function based on a string
  * @s: the string
  * Return: NULL if no match, or a function pointer to correct function.
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (*s == *(ops[i].op))
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
