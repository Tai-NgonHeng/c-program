#include<stdio.h>
int main(){
    int n,i,j;
    char id[20][6],gender[20];
    char Name[20][25];
    float score[20];

    printf("enter the number of the student:");
    scanf("%d",&n); 
    for(i=0;i<n;i++){
        printf("\nId: ");
        fflush(stdin);
           gets(id[i]);
        printf("name: "); 
        fflush(stdin);
           gets(Name[i]);
        printf("Gender: ");fflush(stdin);
           scanf("%c",&gender[i]);
        printf("score: ");fflush(stdin);
        scanf("%f",&score[i]);
    }
    printf("this is the out put\n");
    
    for(j=0;j<n;j++){
         printf("\nId: "); fflush(stdin);
           gets(id[i]);
        printf("name: "); fflush(stdin);
           gets(Name[i]);
        printf("Gender: ");fflush(stdin);
           scanf("%c",&gender[i]);
        printf("score: ");scanf("%f",&score[i]);

    }


    return 0;
   
}