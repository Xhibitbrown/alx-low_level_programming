#include "main.h"
#include <stdio.h>

/**
* more_numbers -prints 10 times the numbers
*/

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				putchar(j);

		}
		putchar(j);
	}
	putchar('\n');
}
