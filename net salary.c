#include<stdio.h>
int main()
{
float netSalary,grossSalary,allowance,deduction;
printf("Enter the amount  of gross salary");
scanf("%f",&grossSalary);
allowance=0.10*grossSalary;
deduction=0.03*grossSalary;
netSalary= grossSalary+allowance-deduction;
printf("The amount of net salary is %.3f,netSalary");
return 0;
}

