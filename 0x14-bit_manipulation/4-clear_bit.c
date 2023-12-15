#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index
 * @n: A pointer that/to change the number to
 * @index: An index that clears a bit
 *
 * Return: if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}

