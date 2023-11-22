#include<stdio.h>
int main(){
     int a[3][4];
     int b,c;
     for(b=0;b<3;b++){
        for(c=0;c<4;c++){
            printf("enter your number[%d][%d]=",b,c);
            scanf("%d",&a[b][c]);
        }
     }
     printf("==============output=============");
     for(b=0;b<3;b++){
        for(c=0;c<4;c++){
            printf("\nthis is your number that you enter[%d][%d]=%d",b,c,a[b][c]);
        }
     }
return 0;
}