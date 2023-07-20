#include "main.h"

/**
 * _isdigit - Checks if a character is a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	/**
	 * Check if the character is within the ASCII range of digits.
	 * ASCII value of '0' is 48, and ASCII value of '9' is 57.
	 */
	if (c >= '0' && c <= '9')
	{
		return (1); /* Digit */
	}
	else
	{
		return (0); /* Not a digit */
	}
}
