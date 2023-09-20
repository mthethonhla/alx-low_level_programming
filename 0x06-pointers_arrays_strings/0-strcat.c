#include "main.h"
#include <stdio.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination
 * @src: source of string
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int d_leng = 0, i;

	while (dest[d_leng])
	{
		d_leng++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[d_leng] = src[i];
		d_leng++;
	}

	dest[d_leng] = '\0';
	return (dest);
}
