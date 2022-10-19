#include "main.h"
/**
*print_alphabet_x10 - print alphabet 10 times
*/

void print_alphabet_x10(void)

{
	char c;
	char i;

	for (c = 'a'; c <= 'z'; c++)
	{
		for (i = 'c'; i >= '0'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
