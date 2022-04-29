#include "main.h"
/**
 * is_prime_number - return 1 if prime number
 * @n: input number
 * Return: Int
 */

int is_prime_number(int n)
{
if (n <= 1)
{
return (0);
}
return (getNumPrim(n, 2));
}

/**
 * getNumPrim - get if num is 0 or 1
 * @num: input num
 * @i: counter
 * Return: int
 */
int getNumPrim(int num, int i)
{
if (num == i)
{
return (1);
}
if (num % i == 0)
{
return (0);
}
return (getNumPrim(num, i + 1));
}
