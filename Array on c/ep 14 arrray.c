#include<stdio.h>
int main(){
    int num[5]={10,20,30,40,50};  //array';
    /*printf("%d\n",num[0]);
    printf("%d\n",num[1]);
    printf("%d\n",num[2]);
    printf("%d\n",num[3]);
    printf("%d\n",num[4]);*/

    int i;                    //loop;
    for (i=0;i<=4;i++){
        printf("%d\n",num[i]);
    }

    int age[5];
    int o;
    /*age[0]=
    age[1]=
    age[2]=
    age[3]=
    age[4]=*/
    for(o=0;o<5;o++){
        printf("%d.enter your number of age =",o);
        scanf("%d",&age[o]);
    }
    int sum[5]={11,22,33,44,55};
    int p;
    for(p=0;p<=4;p++){
        printf("%d\n",sum[p]);
    }







    return 0;

}    