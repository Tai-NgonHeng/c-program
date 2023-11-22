#include<stdio.h>
#include<conio.h>
int main(){
    system("cls");
    int x=0, sum=0, b;
    printf("enter the number in range from 1 to n for x: ");
    scanf("%d" ,&x);
    if(x>=1 , x<=20){
        for (b = 1; b <= x; b++){
        if (b % 2 == 0){
            sum += b;   
        }
        
    }
    printf("The sum of even numbers between 1 to %d is %d\n", x, sum);
    }else if (x<=0){
        printf("what the f!ck you've have enter about bro!!");
    } else  (x>=21);{
        printf("you're not a human bro. it's robot.");
    }



    return 0;
}