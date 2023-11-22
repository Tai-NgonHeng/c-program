#include <stdio.h>

int main() {
   int array[10]={1,2,3,4,5,6,7,8,9,10};
   int n=10;

   printf("\n Odd array is : ");
   for(int i=0;i<n;i++)
   {
      if (array[i]%2==1){
         printf("array [%d]= -1\n\t\t",i);
      }else{
         printf("array [%d]=%d\n\t\t",i,array[i]);
      }
   }
   return 0;
}
