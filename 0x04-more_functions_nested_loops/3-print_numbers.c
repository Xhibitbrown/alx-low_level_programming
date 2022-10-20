#include "main.h"
/**
* print_numbers - print the numbers, from 0 to 9
* Description: A function that prints a number
* Return: Always sucessful
*/

void print_numbers(void)
{
int i;
	for (i = '0'; i <= '9'; i++)
		_putchar(i);
	_putchar('\n');
}
