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
	int i = 0;
	int j = 0;

	for (i = 0; dest[i] = '\0'; i++)

	for (j = 0; src[i] != '\0'; j++)
		dest[i] += src[j];
	dest += '\0';
	return (dest);
}
