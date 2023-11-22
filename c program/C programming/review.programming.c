#include<stdio.h>
int main ()
{ 
    printf("hello world");                                                                             //first learning


    int number;                                                                             //second learning int float main char 
    float height;
    char ch;
    char name[20]="Tai Ngonheng";
    long weight;
    double storage;
    storage=1376438;
    weight=52;
    height=1.75;
    number=18;
    ch='c';
    printf("\nthis is age:%d",number);
    printf("\nthis is my height:%.2f",height);
    printf("\nMy bacll point is %c",ch);
    printf("\nthis is my name %s",name);
    printf("\nthis is my weight %ld",weight);
    printf("\nthis is number of long %.5g",storage);


    int a=10,b=12;                                                 //third learning just try to know about the data type
    int result ;
    result = a + b;
    printf("\nthis is result of %d = %d +%d",result,a,b);
    
     float x,v;
     x=10.2;
     v=12;
     float total;
     total = x*v;
     printf("\nthis is total %.2f=%.2f*%.2f",total,x,v);

     int m , o;
     m=1;
     o=2;
     printf("\nprintf the result for %d",m++);
     printf("\nthhis is number before we use %d",m);
     printf("\nthis is real number of %d",o++);
     printf("\nthis one was plus 1equal =%d",o);
     int s,d,t;
     s=2;
     d=4;
     t=s%d;
     printf("\nthis is %d=%d / %d",t,d,s);     
     int n=10;
     printf("\nthis is messy number : %d",n++); //postfix increment
     printf("\nthis is neyma number: %d",n);
     int love=10;
     printf("\nthis is messy number : %d",++love); //prefix increment
     printf("\nthis is neyma number: %d",++love);

     int j,l;                                                                //fourth learning :assignment operator
     j=10;
     l=2;
     j+=l;                                              //j = j + m
     printf("\nthe result is %d",j);

     int a1,a2,a3;                                    // a3 = (a1==a2) mean a1= a2 
     a1=3;
     a2=2;
     a3=(a1==a2);                                    // if result =0 it not false
     printf("\n%d",a3);                              // if result = 1 it mean true
     
     float num1, num2, num3;
     num1= 21;
     num2= 20.5;
     num3= ( num1 > 20)&&( num2 < num1);
     printf("\n%.0f",num3);

     char heng[20]="";                                                //fifth learning about input and output 
     printf("\nenter your name: ");                                                     //scanf("%d",&variable name);
     gets (heng);                                                                       //gets ("variale name";)
     printf("this is your name:%s",heng);                                               //scanf("%[^\n]",&variable name);


     int u,me;                                         // sixth learning about if else statement
     me=10;
     u=9;
     if(me>u){
        printf("\nme is bigger than u");
     }else{
        printf("\nthis is outside the statement");
     }
     
     
     int baby,honey;
     printf("\nEnter the number for baby:");
     scanf("%d",&baby);
     printf("Enter the number for honey:");
     scanf("%d",&honey);
      if(baby>honey){
        printf("i love baby more than honey because baby:%dand honey:%d",baby,honey);
      }else{
        printf("i love honey more than baby because baby%dand honey:%d",baby,honey);
      }

      int flower,rice,noodle;
      printf("\nenter the number for the flower: ");
      scanf("%d",&flower);
      printf("enter the number for the rice: ");
      scanf("%d",&rice);
      printf("enter the number for the noodle: ");
      scanf("%d",&noodle);

      if (flower>rice&&flower>noodle){
        printf("wow the flower is so beautiful:%d",flower);
      }else if(rice>flower&&rice>noodle){
        printf("rice is so delicious: %d",rice);
      }else{
        printf("the noodle still live with u for lastday on last month:%d ",noodle);
      }


                                                                          //seventh learning about switch statement 
      int g;
      printf("\nenter the number for n form 1 to 12:");
      scanf("%d",&g);

      switch (g)
      {
        case 1:
        printf("january");
        break;
        case 2:
        printf("febuary");
        break;
        case 3:
        printf("march");
        break;
        case 4:
        printf("april");
        break;
        case 5:
        printf("may");
        break;
        case 6:
        printf("june");
        break;
        case 7:
        printf("july");
        break;
        case 8:
        printf("august");
        break ;
        case 9:
        printf("september");
        break;
        case 10:
        printf("october");
        break;
        case 11:
        printf("november");
        break;
        case 12:
        printf("december");
        break;
        
        default:
        printf("you enter outside switch statement");
      }
       
       float lek1,lek2,sarub;
       char k;
       printf("\nenter lek1 :");
       scanf("%f",&lek1);
       printf("enter the operator:");
       fflush(stdin);
       scanf("%c",&k);
       printf("enter lek2 :");
       scanf("%f",&lek2);

       switch(k){
       case '+':
       sarub=lek1+lek2;
       break;
       case'-':
       sarub=lek1-lek2;
       break;
       case'*':
       sarub=lek1*lek2;
       break;
       case'/':
       sarub=lek1/lek2; 
       break; 

      
       }                                                   
       printf("this is the result: %.2f",sarub);   

     int f;                                                                //eighth learning about loop statement
    for(f=1;f<=100;f++){
     
      printf("\n%d, i love u for 100 time.",f);
    }
     int y;
     y=1;
     while (y<=5){                                                      //while loop statement;
      printf("\n%d hello world ",y);
      y=y+1;
     }

    



     
       


     

  








    











     









    return 0;
}