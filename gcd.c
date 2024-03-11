#include<stdio.h>
int main()
{
    int a,b;
    int i;
    int gcd=1;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the  second number");
     scanf("%d",&b);
     while(a>0&&b>0)
        {
            if(a>b)
            {
                a=a%b;
                printf(" value of a %d",a);
            }
            else
            {
              b=b%a;
                  printf("value of b %d",b);
            }


        }
         if(a==0) 
         printf("a");
         else
         printf(" b");
}