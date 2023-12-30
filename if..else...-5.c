#include<stdio.h>
int main()
{

    //Write a program that read two numbers and display maximum.

    int num1,num2;

    printf("Enter two numbers : ");
    scanf("%d %d",&num1,&num2);

    if(num1 > num2){
        printf("The maximum value : %d\n",num1);
    }else{
        printf("The maximum value : %d\n",num2);
    }

    return 0;
}
