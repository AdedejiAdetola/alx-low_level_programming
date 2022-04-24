#include "main.h"

/**
 * _strcmp - compare strings
 * @s1: str 1
 * @s2: str2
 * Return: 0 if s1 and s2 equal
 * else return something elsee
 */
int _strcmp(char *s1, char *s2)
{
int i = 0, op = 0;
while (op == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
{
break;
}
op = *(s1 + i) - *(s2 + i);
i++;
}
return (op);
}
