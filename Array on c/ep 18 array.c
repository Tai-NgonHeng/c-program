#include<stdio.h>
#include<conio.h>
#include<windows.h>
int main(){
    char lt[6];
    int i;

    for (i=0; i<6; i++){
        printf("enter the character:");
        fflush(stdin);
        scanf("%c",&lt[i]);
    }
      int pos;
      printf("\n\n");
      do{
        system("cls");
        printf("enter the position: ");
        scanf("%d",&pos);
      }while(pos<1|| pos<6);{
        lt[7];
      char s;
      printf("enter new charater");
      fflush(stdin);
      scanf("%c",&s);

      }
        

      for(i=6; i>pos-1; i--){
        lt[i]=lt[i-1];

        lt[i]=s;

        for(i=0; i<6; i++){
            printf("The value is : %c\n",lt[i]);
        }
      }

    


    getch();

    return 0;
}