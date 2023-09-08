#include<stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char lower;
	for(lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for(lower = 'A'; lower <= 'Z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
