#include <stdio.h>
int main()
{
    system("cls");
    int n=0, sum= 0, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        if (i % 2 == 0){
            sum += i;   
        }
    }
    printf("The sum of even numbers between 1 to %d is %d\n", n, sum);

    return 0;
}
