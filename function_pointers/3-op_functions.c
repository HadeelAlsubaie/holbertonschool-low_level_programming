#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first number
 * @b: second number
 *
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two integers
 * @a: first number
 * @b: second number
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: first number
 * @b: second number
 *
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: first number
 * @b: second number, not 0
 *
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gives the remainder of a division
 * @a: first number
 * @b: second number, not 0
 *
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
