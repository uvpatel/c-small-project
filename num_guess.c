#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Seed the random number generator
    srand(time(0));

    // Generate and print a random number
    int randomNum = rand() % 100 + 1; // Random number between 1 and 100
    // printf("Random Number: %d\n", randomNum);

    int number;
    printf("Guess the number: ");
    scanf("%d", &number);

    while (randomNum != number)
    {
        if (randomNum == number)
        {
            printf("You guessed the correct number\n");
        }
        else
        {
            printf("You guessed the wrong number\n");
            if (randomNum > number)
            {
                printf("Enter a higher number please: ");
            }
            else
            {
                printf("Enter a lower number please: ");
            }
            scanf("%d", &number);
        }
    }

    printf("You guessed the correct number\n");

    return 0;
}