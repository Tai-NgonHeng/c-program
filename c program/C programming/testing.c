#include<stdio.h>
int main (){
    char name[20] ="Tai NgonHeng" ;
    int age;
    age= 18;
    
    char sex[10] ="male";
    char father [15]= "Muth Nairim";
    char mother [15]= "Hong Krean";
    char school[25]= "Peam chang high school";
    char work[10]= "student";
    

    float result;
    result = 92.679;
    char village [15]="Kbal Teuk";
    char commune [15]="Preah Theat";
    char district [15]="Oreang Ov";
    char province [15]= "Tboung Khmum";
    char study [20]="Rainbow English";
    char type [10]="single";

    printf("\nMy name is %s.",name);
    printf("\nsex:%s.",sex);
    printf("\ni'm %.0d.",age);
    printf("\nFather name: %s.",father);
    printf("\nMother name: %s.",mother);
    printf("\nI'm study at %s.",school);
    printf("\ni am a %s.",work);
    printf("\nMy bac2 result: %.3f.",result);
    printf("\ni live in %s.",village);
    printf(" %s ",commune);
    printf(" %s ",district);
    printf(" %s.",province);
    printf("\nI have been study at %s. ",study);
    printf("\nI am %s for now.",type);
    int a, b, c;
    a=1;
    b=4;
    c=5;
    int total;
    total= a+b-c;
    printf("\ntotal of %d+%d-%d = %d.",a,b,c,total);

   int x, y;
    x=10;
    y=6;
    int haha;
    haha=x%y ;
    printf("\nresult of %d/%d= %d",x,y,haha);


    int f;
    f=10;
    f++;
    printf("thiis %d",f);

    double hope = 2.47746395642556468547;
    
    printf ("\n%lf",hope);
















    return 0;
}