#include <stdio.h>

int main() {
int a, b, ans1;
printf("Enter first number: "); 
scanf("%d", &a);
printf("Enter second number: ");
scanf("%d", &b);
ans1 = a + b;
printf("Sum = %d\n", ans1);



int c, d, ans2;
printf("Enter value of c: ");
scanf("%d", &c);
printf("Enter value of d: ");
scanf("%d", &d);
ans2 = c - d;
printf("sum (c - d) = %d\n", ans2);

int e, f, ans3;

printf("Enter value of e: ");
scanf("%d", &e);

printf("Enter value of f: ");
scanf("%d", &f);
ans3 = e * f;
printf("ans3 (e * f) = %d\n", ans3);

float g , h, ans4;
printf("Enter value of g (numerator): ");
scanf("%f", &g);
printf("Enter value of h  (denominator): ");
scanf("%f", &h);
if (h== 0) {
printf("Error: Division by zero is not allowed.\n");
} else {
ans4 = g / h;
printf("Result (g/h) = %.2f\n",ans4);
}
return 0;
}
