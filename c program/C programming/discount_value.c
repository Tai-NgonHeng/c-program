#include<stdio.h>
int main()
{ 
   float payment, dis;
   printf("enter your price(USD): $");
   scanf("%f",&payment);
  if(payment<20){
    dis = payment*0.03;
    printf("your payment was discount for: %.2f$",dis);
  }else if(payment<40){
    dis = payment*0.05;
      printf("your payment was discount for: %.2f$",dis);
  }else{
    dis = payment*0.10;
    printf("your payment was discount for: %.2f$",dis);
  }
  



    return 0;
}