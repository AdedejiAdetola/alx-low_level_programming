#include "main.h"

/**
 * _strlen - function the retruns string lenth
 *
 * @s: pointer to string
 * Return: int
 */
int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i += 1;
}
return (i);
}
