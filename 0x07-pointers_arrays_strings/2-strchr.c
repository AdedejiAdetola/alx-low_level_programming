#include "main.h"
#include <stdio.h>

/**
 * _strchr - locate string character
 * @s: input string
 * @c: input charracter
 * Return: char
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
else
{
return (NULL);
}
}
