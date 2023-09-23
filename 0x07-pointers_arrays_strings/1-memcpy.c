#include "main.h"

/**
 * _memcpy -  function that copies memory area
 * @dest: copy to destination
 * @src: copy from source
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
