#include <stdio.h>
#include <string.h>
#include "main.h"
/**
*_strcat - print an contate
*Return: Always return the place to concate after
*Description: Concating pointered strings
*@dest: concating on
*@src: concating this
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);

}
