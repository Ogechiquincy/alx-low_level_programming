#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9.
 * Do not print 2 and 4.
 * followed by a new line.
 * Return: Always 0
 * print_numbers - prints numbers 0-9
 *
 * Return: void
 */
void print_most_numbers(void)

void print_numbers(void)
{
	int i = '0';
	int c;

	for (; i <= '9'; i++)
	for (c = '0'; c <= '9'; c++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
		_putchar(c);
	}
	_putchar('\n');
}
