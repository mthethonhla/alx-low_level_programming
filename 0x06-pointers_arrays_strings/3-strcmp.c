#include "main.h"
#include <stdio.h>

/**
 * _strcmp - function that concatenates two strings.
 * @s1: pointer first string
 * @s2: pointer second string
 *
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
