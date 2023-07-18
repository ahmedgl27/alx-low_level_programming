#include <stdio.h>

/**
 * main - Entry point, prints the lowercase alphabet followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Loop to print the lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* Print a new line after printing the alphabet */
	putchar('\n');

	return (0);
}
