#include "main.h"

/**
 * _stccat - concatenates two strings
 * @dest: input valvue
 * @src: input valvue
 * @src: input valvue
 * Return: void
 */

char *_strcat(char *dest, char *src)
{

	int i;
	int j;

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
