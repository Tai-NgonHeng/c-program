#include<stdio.h>
int sum(){
    int a,b,c;

    printf("enter the number for a: ");
    scanf("%d",&a);
    printf("enter the number for b: ");
    scanf("%d",&b);

    c= a+b;   
    
    return c;
}
int main(){
    int result;
    result= sum();
    
    printf("%d",result);
   
   
   
   
   
   
    return 0;
}