#include<stdio.h>
/**
 * main - prints the alphabet in lowercase, followed by a new line all the letters except q and e
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char lower, e, q;

	e = 'e';
	q = 'q';

	for ( lower = 'a';lower <= 'z'; lower++)
	{
		if (lower != e && lower != q)
		{
		putchar(lower);
		}
	}
	putchar('\n');
	return(0);
}
