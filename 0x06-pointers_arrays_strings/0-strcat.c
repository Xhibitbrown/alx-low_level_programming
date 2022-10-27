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

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	puchar(dest);

	return (dest);
}
