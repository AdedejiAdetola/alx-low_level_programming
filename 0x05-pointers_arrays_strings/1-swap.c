include "main.h"

/**
 * swap_int - swaps value of int
 * @a: pointer to an int
 * @b: pointer to int 2
 * Return: Nan
 */
void swap_int(int *a, int *b)
{
int aux;
aux = *a;
*a = *b;
*b = aux;
}
