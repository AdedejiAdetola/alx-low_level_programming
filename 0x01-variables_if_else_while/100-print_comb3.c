#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
int j1 = 48;
int j2;
int comm = 44;
while (j1 <= 57)
{
j2 = j1 + 1;
while (j2 <= 57)
{
putchar(j1);
putchar(j2);
if (j1 != 56 || j2 != 57)
{
putchar(comm);
putchar(32);
}
j2 += 1;
}
j1 += 1;
}
putchar('\n');
return (0);
}
