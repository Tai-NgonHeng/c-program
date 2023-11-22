#include<stdio.h>
int main(){
  /*  int a;
    for(a=1;a<=10;a++){
         printf("\n%d",a);

    }*/
 /*   int index;
    int total;
    for(total =0, index =0 ; index <10 ; index+=1){
        if(index >5)
        total += index;
        else if (index<5)
        total-=index;
    }
   printf("%d",total);*/

   int row,col;
   for (row=1;row<=4;++row){
    for(col=1;col<=row;++col)
    printf("*\t");
    printf("\n");
   }
    return 0;
}