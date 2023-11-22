#include<stdio.h>
void sum(int n1, int n2){
    int reesult;
    reesult= n1+n2;
    printf("the result of this number is %d",reesult);

}
int main()
{
    int num1, num2;
    printf("enter the number for the num1: ");
    scanf("%d",&num1);
    printf("enter the number for the num2: ");
    scanf("%d",&num2);

    sum(num1,num2);


}