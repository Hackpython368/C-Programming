#include<stdio.h>

int main(){
    int weight,height;


    printf("Enter your weight (KG): ");
    scanf("%d",&weight);
    printf("Enter your height (cm):");
    scanf("%d",&height);
    float convertheight = height/100.0;
    float bmi = weight/(convertheight*convertheight);


    printf("Bmi = %.2f\n",bmi);
    if(bmi<18.5){
        printf("You are under weight");
    }else if (bmi<24.9){
        printf("You are normal weight");
    }else if(bmi<30){
        printf("You are over weight");
    }else{
        printf("You are very very over weight");
    }
    return 0;
}