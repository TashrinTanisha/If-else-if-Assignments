#include<stdio.h>
int main()
{
    //Write a program to check a number positive or negative.

    int number;

    printf("Enter the number : ");
    scanf("%d",&number);

    if(number > 0){
        printf("Positive\n");
    }else {
        printf("Negative\n");
    }

    return 0;
}
