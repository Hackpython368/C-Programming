#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    srand(time(NULL));

    int randomNumber = (rand() % 100)+1;
    int user;
    int count = 0;
    while(1){
        printf("Enter Your Guess number between (1-100) :");
        scanf("%d",&user);

        if(user>randomNumber){
            printf("Lower value \n");
        }else if(user==randomNumber){
            printf("You Win ! \n");
            printf("You take %d chance !",count);
            break;
        }else{
            printf("Upper value \n");
        }
        count++;
    }
    return 0;
}