#include <stdio.h>

/**
* main - a program that prints the alphabet in lowercase
* Description: prints the alphabet in lowercase
* Return: Always 0
*/

int main(void)
{
	int c;

	for (c = 'a'; c  <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
			putchar('\n');
			return (0);
	}
}
