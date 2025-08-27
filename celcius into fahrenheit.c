#include<stdio.h>
#include<conio.h>
int main()
{
float celcius;
float fahrenheit;
printf("Enter the temperature in celcius:");
scanf(%f,&celcius);
fahrenheit=(9/5*celcius)+32.0;
printf("%.2f celcius is eqauls to %.2f fahrenheit.",celcius,fahrenheit);
return 0;
}
