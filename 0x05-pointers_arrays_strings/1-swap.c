#include "main.h"
#include <stdio.h>

/**
* swap_int - a function that swaps the values of two integers
*@a: pointer a
*@b: pointer b
*Return: Always 0*
*/

void swap_int(int *a, int *b)
{
int n;
	n = *a;
	*a = *b;
	*b = n;
}
