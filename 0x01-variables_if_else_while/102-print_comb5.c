#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int n1 = 48;
int a = 0;
int b;
int comm = 44;

while (a <= 99)
{
b = a + 1;
while (b <= 99)
{
putchar((a / 10) + n1);
putchar((a % 10) + n1);
putchar(32);
putchar((b / 10) + n1);
putchar((b % 10) + n1);
if (a != 98 || b != 99)
{
putchar(comm);
putchar(32);
}
b += 1;
}
a += 1;
}
putchar('\n');
return (0);
}