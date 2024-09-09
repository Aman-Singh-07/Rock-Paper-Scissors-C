#include<Stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(0));

    int Player,Computer=((rand()%3)+0);

    printf("Enter Rock---> 0; Paper--> 1; Suizer--> 2");
    printf("Enter Your Choice : ");
    scanf("%d",&Player);

    printf("Opponent's Choice: %d\n",Computer);

    while (Player==0 || Player==2 || Player==1){

        if ((Player==0 && Computer==1) || (Player==2 && Computer==0) || (Player==1 && Computer==2)){
            printf("You Lose\nPlease Try Again!");
        }

        else if ((Player==1 && Computer==0) || (Player==0 && Computer==2) || (Player==2 && Computer==1)){
            printf("Hurray!,You Won");
        }

        else {
            printf("Match Tie\nPlease Try Again!");
        } 
        break;
    }
    
    return 0;
}
