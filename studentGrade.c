#include<stdio.h>
void printGrade(float avg);
float calculateAvg(float maths,float sceince,float hindi,float english);


int main(){
    float mathMarks, sciMarks, hindiMarks,engMarks;

    printf("Enter the marks of Maths :");
    scanf("%f",&mathMarks);
    printf("Enter the marks of Science :");
    scanf("%f",&sciMarks);
    printf("Enter the marks of Hindi :");
    scanf("%f",&hindiMarks);
    printf("Enter the marks of English :");
    scanf("%f",&engMarks);

    float avg = calculateAvg(mathMarks,sciMarks,hindiMarks,engMarks);
    printf("Student average number is %.2f",avg);

    printGrade(avg);




    return 0;
}

float calculateAvg(float maths,float science,float hindi,float english){
    return (maths+science+hindi+english)/4.0;
}

void printGrade(float avg){
    if(avg>95){
        printf("Your grade is A+ \n");
    }else if(avg>85){
        printf("Your grade is A \n");
    }else if(avg>75){
        printf("Your grade is B+ \n");
    }else if(avg>65){
        printf("Your grade is B \n");
    }else if(avg>55){
        printf("Your grade is C+ \n");
    }else if(avg>45){
        printf("Your grade is D \n");
    }else{
        printf("You are Fail");
    }
}