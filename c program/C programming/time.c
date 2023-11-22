#include<stdio.h>
int main()
{
    int t,i,time;
    printf("Enter the number : ");
    scanf("%d",&t);

    for (i = 1; i <= 10; i++)
    {
         time = t*i;
        printf("%d * %d = %d\n",t,i,time);
    }
        return 0;
}