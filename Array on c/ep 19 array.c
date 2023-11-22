#include<stdio.h>
#include<conio.h>
int main(){
    int num[20],n;
    
    //input

    printf("enter n: ");
    fflush(stdin);
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("%d. Enter number: ",i);
        scanf("%d",&num[i]);

    }
    //output 1


    printf("===========output before sort===========\n");
    for(int i=0 ;i<n; i++){
        printf("%d\t",num[i]);
    }
    
    //output 2
    for (int i =0; i<n-1; i++){
        for (int t= i+1; t++){
            printf("");
        }
    }










    getch();
    return 0;
}
