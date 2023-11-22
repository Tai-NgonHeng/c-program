#include<stdio.h>
int main(){
    int arr[]={1,5,3,8,9,10,39,-3,2,9};
    int arrOdd[10];
    int arrEven[10];
    int indexOdd=0;
    int indexEven=0;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){   t
        if(arr[i]%2==0){
            arrEven[indexEven] = arr[i];
            indexEven++;
        }
        if(arr[i]%2 !=0){
            arrOdd[indexOdd] = arr[i];
            indexOdd++;
        }
    }
    for(int i=0; i<sizeof(arrEven)/sizeof(arrEven[0]);i++){
        printf("%d",arrEven[i]);
    }
    printf("\n\n");
    for(int i=0; i<sizeof(arrOdd)/sizeof(arrOdd[0]);i++){
        printf("%d",arrOdd[i]);
    }


    return 0;
} 