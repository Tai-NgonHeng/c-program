#include<stdio.h>
int main()
{
    int a[4][2];
    int b,c;
    for(b=0;b<4;b++){
        for(c=0;c<2;c++){
            printf("enter your number for [%d][%d]=",b,c);
            scanf("%d",&a[b][c]);
        }
    }
   printf("\n========================output=================");
   for(b=0;b<4;b++){
    for(c=0;c<2;c++){
        printf("\nthis is the number that you enter [%d][%d]=%d",b,c,a[b][c]);
    }
   }
    return 0;
}