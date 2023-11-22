#include<stdio.h>
int main()
{
    char name[20]="";
    char date[20]="";
    char work[20]="";
    char bayby[20]="";
    char address[20]="";
    char bornplace[20]="";
    char university[20]="";
    float highschool;
    char mother_name[20]="";
    char father_name[20]="";
    char code [20]="";
    printf("input your name: ");
    gets(name);
    printf("input your birthday: ");
    scanf("%s",&date);
    printf("input your work: ");
    scanf("%s",&work);
    printf("input your bayby: ");
    scanf("%s",&bayby);
    printf("input your address: ");
    scanf("%s",&address);
    printf("input your bornplace: ");
    scanf("%s",&bornplace);
    fflush(stdin);
    printf("input your university: ");
    scanf("%[^\n]",&university);
    
    printf("input your score: ");
    scanf("%f",&highschool);
    fflush(stdin);
    printf("input your mother name: ");
    gets(mother_name);
    fflush(stdin);
    printf("input your father name: ");
    gets(father_name);
    printf("input your code: ");
    scanf("%s",&code);

    printf("\nthis is your enter name: %s.",name);
    printf("\nthis is your enter birthday: %s.",date);
    printf("\nthis is your enter work: %s.",work);
    printf("\nthis is your enter bayby: '%s'.",bayby);    
    printf("\nthis is your enter address: %s.",address);
    printf("\nthis is your enter bornplace: %s.",bornplace);
    printf("\nthis is your enter university: %s.",university);
    printf("\nthis is your enter highschool score: %.3f",highschool);
    printf("\nthis is your enter mother name: %s.",mother_name);
    printf("\nthis is your enter father name: %s.",father_name);
    printf("\nthis is your enter code: %s",code);
     
    

    return 0;
}