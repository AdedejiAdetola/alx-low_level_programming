#include <stdio.h>

/**
 * main - print alphabets
 * Return: 0
 */

int main(void)
{
int j = 'a';
int v = 'A';
while (j <= 'z')
{
putchar(j);
j += 1;
}
while (v <= 'Z')
{
putchar(v);
v += 1;
}
putchar('\n');
return (0);
}
