#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNumber = 5;
    int guess;
    int count = 0;
    int guessLimit = 3;
    int outOfGuesses = 0;
    printf("----------GUESS A NUMBER---------\n");

    while(guess != secretNumber && outOfGuesses == 0){
        if(count < guessLimit){
            printf("Enter a Number: ");
            scanf("%d",&guess);
            count++;
        }
        else{
            outOfGuesses = 1;
        }

    }
    if(outOfGuesses == 1){
        printf("Out of guesses");
    } else {
        printf("You Win!");
    }
}

