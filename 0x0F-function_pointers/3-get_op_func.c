#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform operation
 * @s: input symbol
 * Return: pointer to another function the performs operation
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (s == ops[i].op)
			return(ops[i].f);
		i++;
	}

}
