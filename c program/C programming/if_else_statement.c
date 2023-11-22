#include<stdio.h>
int main()
{
    int number1;

    printf("Enter a number: ");
    scanf("%d", &number1);

    if(number1 > 0){
        printf("%d is positive", number1);
    }
    else{
        printf("%d is negative", number1);
    }

    return 0;
}