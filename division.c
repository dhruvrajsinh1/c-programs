#include <stdio.h>

int main() {
float a, b, ans;
printf("Enter value of a (numerator): ");
scanf("%f", &a);
printf("Enter value of b (denominator): ");
scanf("%f", &b);
if (b == 0) {
printf("Error: Division by zero is not allowed.\n");
} else {
ans = a / b;
printf("Result (a / b) = %.2f\n",ans);
}
return 0;
}
