#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, generates a random number, prints the last digit,
 *        and checks whether it's greater than 5, equal to 0, or less than 6.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, last_digit;

	/* Seed the random number generator with the current time */
	srand(time(0));

	/* Generate a random number between 0 and RAND_MAX (inclusive) */
	n = rand() - RAND_MAX / 2;

	/* Calculate the last digit of the number */
	last_digit = abs(n) % 10;
	if (n < 0)
	{
		last_digit = -last_digit;
	}

	/* Print the last digit */
	printf("Last digit of %d is %d and is ", n, last_digit);

	/* Check and print the condition of the last digit */
	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}

	return (0);
}
