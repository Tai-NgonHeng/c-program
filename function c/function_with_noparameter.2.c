#include<stdio.h>
void love(){
    printf("hello world ");
}
void math(){
    int a,c,result;
    char ch;
    printf("\nenter the number for letter a: "); scanf("%d",&a);
    printf("enter the number for operator: "); 
    fflush(stdin);
    scanf("%c",&ch);   
    printf("enter the number for letter c: "); scanf("%d",&c);
    switch(ch){
        case'+':
        result= a+c;
        break;
        case '-':
        result=a-c;
        break;
        case'/':
        result=a/c;
        break;
        case'*':
        result=a*c;
        break;

    }
    printf("this is the result that we solve: %d",result);
}
int main(){
    

    return 0;

}
