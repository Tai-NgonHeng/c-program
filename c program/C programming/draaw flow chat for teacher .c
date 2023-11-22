#include<stdio.h>
int main(){
    int n,a,c=1,s=0;

    float avg;

    printf("\nHOW MANY NUMBERS?");
    scanf("%d",&n);

    while(c<=n){
        printf("\n enter the number :  ");
        scanf("%d",&a);

        s+=a;
        c++;

    }
    avg= (float)s/n;
    printf("\n AVERAGE IS %f", avg);
    


    return 0;
}