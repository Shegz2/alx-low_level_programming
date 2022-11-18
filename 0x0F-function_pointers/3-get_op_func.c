#include "3-calc.h"
/**
 * get_op_func - function
 * @s: input by user
 * Return: pointe
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
