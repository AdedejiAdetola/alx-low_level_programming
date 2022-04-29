#include "main.h"

/**
 * _strlen_recursion - Function to return length of string
 * @s: input string
 * Return: int
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + _strlen_recursion(s));
}
