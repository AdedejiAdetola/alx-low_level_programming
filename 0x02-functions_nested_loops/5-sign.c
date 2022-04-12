#include "main.h"

/**
 * print_sign - prints the sign
 * @n: n is an int
 * Return: 1 (if possible), 0 (if zero), -1 (if negative)
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n < 0)
{
_putchar('-');
retunr (-1);
}
else
{
_putchar('0');
return (0);
}
}
