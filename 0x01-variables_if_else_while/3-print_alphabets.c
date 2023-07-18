#include <stdio.h>

/**
 * main - Entry point, prints the lowercase and uppercase alphabets
 *        followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;

	/* Print the lowercase alphabet */
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}

	/* Print the uppercase alphabet */
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}

	/* Print a new line after printing both alphabets */
	putchar('\n');

	return (0);
}
