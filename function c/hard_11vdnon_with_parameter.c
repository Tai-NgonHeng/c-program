#include<stdio.h>
void sum(int n1,int n2){
    int re;
    re=n1+n2;
    printf("this is the result is %d",re);



}
int main(){
    int num1,num2;
    printf("enter the number for num1:"); scanf("%d",&num1);
    printf("enter the number for num2:"); scanf("%d",&num2);
    sum(num1,num2);



    return 0;
}


