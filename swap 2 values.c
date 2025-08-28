#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the first number a :");
scanf("%d",&a);
printf("enter the second number b:");
scanf("%d",&b);

c=a;
a=b;
b=c;
printf("after swapping a = %d and b = %d\n",a,b);
return  0;
}
