#include<stdio.h>
#include<conio.h>
int main()
{
float P,R,N,I;
printf("Enter the principal amount:\n");
scanf("%f",&P);
prinf("enter the amount of  rate :\n");
scanf("%f",&R);
printf("enter the amount of time:\n");
scanf("%f",&N);
I=(P*R*N)//100;
printf("the amount of intrest is %.2f",I);
return 0;
}
