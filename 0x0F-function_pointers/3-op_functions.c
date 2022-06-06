#include "3-calc.h"

/**
 * op_add - addition function
 * @a: function argument
 * @b: function argument
 * Return: intger
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - addition function
 * @a: function argument
 * @b: function argument
 * Return: intger
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - addition function
 * @a: function argument
 * @b: function argument
 * Return: intger
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - addition function
 * @a:  function argument
 * @b: function argument
 * Return: intger
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - addition function
 * @a: function argument
 * @b: function argument
 * Return: intger
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
