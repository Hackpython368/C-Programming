#include<stdio.h>

int main(){
    printf("Simple Calculator \n");

    float num1, num2;
    char op;

    printf("Enter the first number : ");
    scanf("%f",&num1);

    printf("Enter the second number : ");
    scanf("%f",&num2);

    printf("Enter the Operation : ");
    scanf("\n %c",&op);


    switch(op){
        case '+':
        printf("The sum of the %.2f and %.2f is %.2f",num1,num2,num1+num2);
        break;
        case '-':
        printf("The difference of the %.2f and %.2f is %.2f",num1,num2,num1-num2);
        break;
        case '*':
        printf("The %.2f time %.2f is %.2f",num1,num2,num1*num2);
        break;
        case '/':
        printf("The division of %.2f and %.2f is %.2f",num1,num2,num1/num2);
        break;
        default:
        printf("The operator enter is in valid!");
        break;
    }
    return 0;
}