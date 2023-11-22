#include<stdio.h>
#include<conio.h>
int main()
{
    float number1, number2;
    printf("enter number of first number:");
    scanf("%f",&number1);
    printf("enter number of second number:");
    scanf("%f",&number2);

    if(number1<number2){
      printf("%.2f<%.2f",number1,number2);

    }
    if(number1==number2){
      printf("%.2f=%.2f",number1,number2);

    }
    if (number1>number2){
       printf("%.2f>%.2f",number1,number2);

    }
        
      
       
      
        

    getch();    










    return 0;
}