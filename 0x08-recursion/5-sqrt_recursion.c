#include "main.h"

/**
 * _sqrt_recursion - return natural square root of number
 * @n: input number
 * Return: int
 */

int _sqrt_recursion(int n)
{
if (n == 0)
{
return (0);
}
if (n == 1)
{
return (1);
}
if (n < 0)
{
return (-1);
}
return (getNumSqr(n, 1));
}

/**
 * getNumSqr - get num of sqrt
 * @num: input num'
 * @i: counter
 * Return: int
 */

int getNumSqr(int num, int i)
{
if (num == (i * i))
{
return (i);
}
else if (num > (i * i))
{
return (getNumSqr(num, i + 1));
}
else
{
return (-1);
}
}
