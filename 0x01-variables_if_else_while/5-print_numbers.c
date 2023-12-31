#include <stdio.h>

/**
 * main - Entry point, prints all single-digit numbers of base 10
 *        starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit;

	/* Loop to print all single-digit numbers */
	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}

	/* Print a new line after printing all the single-digit numbers */
	printf("\n");

	return (0);
}
