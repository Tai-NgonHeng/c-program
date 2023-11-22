#include<stdio.h>                    //function learning 10th
void love();
void greeting(){
    printf("\nwelcome to c programing language ");

}
void sum(){
    int n1,n2,r;
    printf("\nenter the number for n1: ");
    scanf("%d",&n1);
    printf("enter the number for n2: ");
    scanf("%d",&n2);
     r=n1-n2;
     printf("the result of n1 and n2 is %d-%d=%d",n1,n2,r);
}
void friend(){
    int y1,y2,resu;
    printf("\nenter the number for y1: ");
    scanf("%d",&y1);
    printf("enter the number for n2: ");
    scanf("%d",&y2);

    resu=y1+y2;
    printf("the result of this %d+%d=%d",y1,y2,resu);

}


int main(){

    love();
    greeting();
    sum();
    friend();
    
    return 0;

}
void love(){
    printf("helllo world");
    printf("\nwhat is ur name?");;

}


