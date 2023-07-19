#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the correct operation to perform.
 * @s: The operator.
 *
 * Return: A pointer to the function that can
 * perform the correct operation.
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
	int i = 0;

	while (i <= 5)
	{
		if (*(ops[i].op) == *s)
			break;
		i++;
	}

	return (ops[i].f);
}
