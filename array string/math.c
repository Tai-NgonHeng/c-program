#include<stdio.h>
#include<math.h>
int main()
{
    int s;
    printf("Enter a number for square: ");
    scanf("%d", &s);
    int q = pow(s,2);
    printf("The square is : %d",q);
    return 0;
}