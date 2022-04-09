#include <stdio.h>

/**
 * main - print alphabt
 * Return: 0
 */
int main(void)
{
int j = 'a';
while (j <= 'z')
{
if (j == 'e' || j == 'q')
{
j += 1;
}
else
{
putchar(j);
j += 1;
}
}
putchar('\n');
return (0);
}
