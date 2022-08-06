#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int rockPaperScessiors(char you, char comp){
    //returns 1 if you win, -1 if you lose and 0 if draw
    
    //conditions for draw
    //Cases covered:
    // rr
    // pp
    // ss
    if(you == comp){
        return 0;
    }

    //non-draw conditions
    // Cases covered:
    // rs
    // sr
    // sp
    // ps
    // pr
    // rp
    if(you == 'r' && comp == 's'){
        return 1;
    }
    else if(you == 's' && comp == 'r'){
        return -1;
    }
    if(you == 's' && comp == 'p'){
        return 1;
    }
    else if(you == 'p' && comp == 's'){
        return -1;
    }
    if(you == 'p' && comp == 'r'){
        return 1;
    }
    else if(you == 'r' && comp == 'p'){
        return -1;
    }
}


int main(){
    char you,comp;
    srand(time(0));
    int number = rand()%100 + 1;

    if(number < 33){
        comp = 'r';
    }
    else if(number > 33 && number < 66){
        comp = 'p';
    }
    else{
        comp = 's';
    }
    printf("Enter 'r' for rock, 'p' for paper and 's' for gun : ");
    scanf("%c", &you);

    int result = rockPaperScessiors(you, comp);
   
    if(result == 0){
        printf("Game draw!\n");
    }
    else if(result == 1){
        printf("You win!\n");
    }
    else{
        printf("You lose!\n");
    }
     printf("You chose %c and computer chose %c.\n", you , comp);
    return 0;
}