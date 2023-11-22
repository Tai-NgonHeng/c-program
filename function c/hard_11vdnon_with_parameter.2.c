#include<stdio.h>
void sum(int m1, char ch){
    printf("number that you put is the number: %d",m1);
    printf("\nthe letter that you input is the letter : %c",ch);

}
int main(){
    int m1;
    char ch;
    printf("enter number 1 for m1: ");
    scanf("%d",&m1);
    printf("enter the letter for ch: ");
    fflush(stdin);
    scanf("%c",&ch);

    sum( m1, ch);


    return 0;
}
