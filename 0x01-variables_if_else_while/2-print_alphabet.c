#include <stdio.h>
/**
 * main - Print all alphabets in lower case
 * Return: 0
 */
int main(void)
{
int l = 'a';
while (l <= 'z')
{
putchar(l);
l += 1;
}
putchar('\n');
return (0);
}
