 #include<stdio.h>
 #include<math.h>
int main()
{
    float a, b ,c;
    float x1,x2,x;
     printf("calculate following this form : \n");
     printf("a*x*x + b*x + c = 0\n");
    printf("input a : ");
    scanf("%f",&a);
     printf("input b : ");
     scanf("%f",&b);
     printf("input c : ");
     scanf("%f",&c);

     float delta = pow(b,2) - 4*a*c;

    printf("delta = %f\n",delta);

     if(delta > 0)
     {
        x1 = (-b - sqrt(delta))/2*a;
        x2 = (-b + sqrt(delta))/2*a;
        printf("x1 = %f\n",x1);
        printf("x4 = %f\n",x2);
    }
    else if(delta == 0)
     {
        x = -b/2*a;
        printf("x = %f\n",x);
     }
     else
    {
       printf("it doesn't have answer!");
    }
return 0;
 }
