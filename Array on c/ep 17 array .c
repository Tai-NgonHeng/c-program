#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int i,j;

    for(i=0;i<9;i++){
        printf("%d\n",a[i]);

    }
    int n;
    printf("enter an intergal(1-9): ");
    scanf("%d",&n);
    
    for (j=0;j<9;j++){
        if (n==a[j]){
            printf("\t search found \n");
            printf("the value is : %d\n",a[j]);
        }else{
            printf("\tsearch not found \n");
        }
    }

    


    return 0;

}