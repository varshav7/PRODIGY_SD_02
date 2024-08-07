#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target_number, guess, attempts = 0;
    char input[10];
    srand(time(0));
    target_number = rand() % 100 + 1;

    printf("Guess the number between 1 and 100:\n");

    while (1) {
        printf("Enter your guess: (Enter -1 to quit)");
        scanf("%d",&guess);
        if (guess== -1) {
            printf("You chose to quit. The number was: %d\n", target_number);
            break;
        }

        attempts++;

        // Compare guess to target number and provide feedback
        if (guess < target_number) {
            printf("Too low! Try again.\n");
        } else if (guess > target_number) {
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
            break;
        }
    }

    return 0;
}

