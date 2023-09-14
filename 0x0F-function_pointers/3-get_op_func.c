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
	op_t operation;

	while (*s >= '%' && *s <= '/')
	{
		if (*s == '+')
			return (operation.f = op_add);
		else if (*s == '-')
			return (operation.f = op_sub);
		else if (*s == '*')
			return (operation.f = op_mul);
		else if (*s == '/')
			return (operation.f = op_div);
		else if (*s == '%')
			return (operation.f = op_mod);

		s++;
	}

	return (NULL);
}
