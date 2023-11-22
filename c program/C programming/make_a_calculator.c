#include<stdio.h>
int main()
{
    float first, second, result;
    char ch;
    printf("Input the first number:");
    scanf("%f",&first);
    printf("input the operator: ");
    fflush(stdin);
    scanf("%c",&ch);
    printf("input the second number:");
    scanf("%f",&second);
     switch(ch)
     {
        case '+':
           result = first + second;
         break;
        case '-':
           result = first - second;
         break;
        case '*':
           result = first * second;
          break;
        case '/':
           result = first / second;
           break;


         default:
         printf("invalid operator");

     }

     printf("the result of twice is %.2f",result);




    return 0;
}