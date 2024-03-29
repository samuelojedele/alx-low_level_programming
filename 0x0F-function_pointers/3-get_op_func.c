#include "3-calc.h"

/**
 * get_op_func - selects the correct function
 * to perform the operation asked by the user
 * @s: operation sign
 *
 * Return: function pointer to particular operation
 * functon or NULL (if s does not match any of the 5
 * expected operators)
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (!strcmp(ops[i].op, s))
			return (ops[i].f);

		i++;
	}

	return (NULL);
}
