#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - select the correct operation asked by user
 *
 * @s: operator arg
 *
 * Return: function pointer corresponding to given operator
 *
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

	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;
	return (ops[i].f);
}
