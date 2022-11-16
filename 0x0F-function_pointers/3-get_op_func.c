#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - get function
 * @s: pointer to function
 * Return: Integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
{
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul}'
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL},
};
	for (i = 0; i < 5; i++)
{
	if (*(ops[i]).op == *s)
		return (ops[i].f);
	i++;
}
	return (NULL);
}
