#include <stdio.h>
#include <stdlib.h>

//guess the magic number
int main(){
    int x=(rand()%10)+1,y;
    printf("%d\n",x);

    //To make sure that the given number is within the range
    do{
    printf("Enter your guess:");
    scanf("%d",&y);
    if(y<1 || y>10){
        printf("Enter a number between 1 and 10.\n");
    }
    }while(y<1 || y>10);

    //GUESSING
    for(int i=0;i<3;i++){
        if(x==y){
            printf("BINGO! You are right.\n");
            break;
        }
        if(x<y-3){
            printf("Too high\n");

        }
        if(x>y+3){
            printf("Too low\n");

        }
        else if(i<2){
            printf("Wrong:( Try Again \nEnter your guess:\n");
            scanf("%d",&y);
        }
        else{
            printf("Out of guesses\n");
        }

    }
    int again;
    printf("Do you want to play again?0/1: \n");
    scanf("%d",&again);
    if(again==1){
        main();
    }
    else{
        printf("Thankyou for playing the game!");
    }

}
