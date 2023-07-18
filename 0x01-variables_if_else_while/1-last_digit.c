#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    // Seed the random number generator with the current time
    srand(time(0));

    // Generate a random number between 0 and RAND_MAX (inclusive)
    n = rand() - RAND_MAX / 2;

    // Extract the last digit of the random number
    int last_digit = abs(n) % 10;

    // Print the output based on the last digit
    printf("Last digit of %d is %d and is ", n, last_digit);

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

    return 0;
}
