#include<stdio.h>
int main()
{
    int age;

    printf("Enter age : ");
    scanf("%d",&age);

    if(age < 2){
        printf("Infant\n");
    }else if(age >= 2 && age < 10){
        printf("Child\n");
    }else if(age >= 10 && age < 20){
        printf("Teenage\n");
    }else if(age >= 20 && age < 30){
        printf("Adult\n");
    }else{
        printf("Old\n");
    }

    return 0;
}
