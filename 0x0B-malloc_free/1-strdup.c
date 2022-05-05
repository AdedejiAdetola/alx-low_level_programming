#include <stdlib.h>

/**
 * _strdup - return pointer to new space ein memory
 * @str: input char
 * Return: char
 *
 */

char *_strdup(char *str)
{
char *dup;
unsigned int i = 0;
unsigned int j = 0;

if (str == NULL)
return (NULL);

while (str[i] != '\0')
i += 1;

i += 1;
dup = malloc(i *sizeof(*dup));
if (dup == NULL)
return (NULL);

while (j < i)
{
dup[j] = str[j];
j += 1;
}
return (dup);
}
