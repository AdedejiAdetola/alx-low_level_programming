#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 * Return: void
 */

void print_numbers(void)
{
int n = 0;
while (n < 10)
{
_putchar(n + '0');
n += 1;
}
_putchar('\n');
}
