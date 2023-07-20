#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	int num;

	/* Loop from 0 to 9 and print each number */
	for (num = 0; num <= 9; num++)
	{
		_putchar(num + '0');
	}

	/* Print a new line character */
	_putchar('\n');
}
