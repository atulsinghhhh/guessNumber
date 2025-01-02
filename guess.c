#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void guess(int N)
{
    int number, guess, numberofguess = 0;

    // Seed random number generator
    srand(time(NULL));

    // Generate a random number in the range [1, N]
    number = (rand() % N) + 1;

    printf("Guess a number between 1 and %d\n", N);

    do {
        // Check if user has exceeded the maximum guesses
        if (numberofguess > 9) {
            printf("\nYou Lose! The number was %d.\n", number);
            break;
        }

        // Input by user
        scanf("%d", &guess);

        numberofguess++;

        // Compare the guess with the number
        if (guess > number) {
            printf("Lower number please!\n");
        } else if (guess < number) {
            printf("Higher number please!\n");
        } else {
            printf("You guessed the number in %d attempts!\n", numberofguess);
            break; // Exit the loop
        }

    } while (guess!=number); 
}

int main(){
    int N=100;
    guess(N);
    return 0;
}