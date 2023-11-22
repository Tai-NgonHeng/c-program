#include<stdio.h>
int sum(int a, int b,int c){
    return (a+b+c);
}
void input(){
    
    int a,b,c;
    printf("enter the number for a: ");
    scanf("%d",&a);
    printf("enter the number for b: ");
    scanf("%d",&b);
    printf("enter the number for c: ");
    scanf("%d",&c);  
   
   
    int resultt;  
    resultt= sum (a,b,c);
    printf("result: %d\n",resultt);


}


int main(){
    input();
   return 0;
}
