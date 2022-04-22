#include "main.h"

/**
 * rev_string - function that reverses string
 * @s: string value
 * Return:NaN
 */
void rev_string(char *s)
{
int i = 0;
int aux = 0;
char ltemp;
while (aux < i)
{
ltemp = s[i];
s[i] = s[aux];
s[aux] = ltemp;
aux++;
i--;
}
}
