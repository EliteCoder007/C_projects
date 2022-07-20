#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    printf("*** Welcome to Guessing Game ***\n\n");

    int number, guess, num_guesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;//Generates a random number between 1 to 100;
    // printf("The Number is %d\n", number);

    //Keep running the loop until the number is guessed;
    do{
        printf("Guess the number between 1 to 100 : \n");
        scanf("%d", &guess);
        printf("\n");
        if(guess > number){
            printf("Lower number please!\n");
        }
        else if(guess < number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attemps!\n", num_guesses);
        }
        num_guesses++;

    }while(guess != number);



    
    return 0;
}