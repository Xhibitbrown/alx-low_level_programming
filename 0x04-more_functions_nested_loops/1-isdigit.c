#include "main.h"
/**
* _isdigit - a function that checks for a digit
* @c: The letter to print
* Return: 1 if it is a digit
*/

int _isdigit(int c)
{
	if ((c >= 0) && (c <= 9))
		return (1);
	else
		return (0);
}
