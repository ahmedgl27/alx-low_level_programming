#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9 (excluding 2 and 4),
 *                      followed by a new line.
 *
 */
void print_most_numbers(void)
{
	int num;

	/* Loop from 0 to 9 and print each number (excluding 2 and 4) */
	for (num = 0; num <= 9; num++)
	{
		/* Check if the current number is not 2 or 4 */
		if (num != 2 && num != 4)
		{
			_putchar(num + '0'); /* Print the digit as a character */
		}
	}

	_putchar('\n'); /* Print a new line character */
}
