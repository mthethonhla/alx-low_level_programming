#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number binary to be printed
 */

void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int a;

	for (i = 63; i >= 0; i--)
	{
		a = n >> i;
		if (a & 1)
		{
			_putchar('1');
			count++;
		}
		else if (a)
			_putchar('0');
	}
	if (!a)
		_putchar('0');
}

