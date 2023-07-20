#include "main.h"

/**
 * _isdigit function Checks if a character is a digit (0 through 9)
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	/**
	 * Check if the character is within the ASCII range of digits.
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
