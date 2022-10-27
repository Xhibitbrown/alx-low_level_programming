#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*_strcat - print an contate
*Return: Always return the place to concate after
*Description: Concating pointered strings
*/

char *_strcat(char *dest, char *src)
{
	int n = strcat(dest, src);
	putchar('\0');
               return (dest);
}
