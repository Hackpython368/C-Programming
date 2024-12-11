#include<stdio.h>

int main(){
    float temp;
     
    printf("Enter the temperature in Fahrenheit : ");
    scanf("%f",&temp);

    float tempCel = (temp-32.0)*(5.0/9.0);
    printf("Enter is tempreature in Fahrenheit %.2f and not in Celsius %.2f",temp,tempCel);
    return 0;
}