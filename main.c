#include <stdio.h>
#include <stdlib.h>

int main()
{
   double num1;
double num2;
char op;

printf("Enter a number: ");
scanf("%lf", &num1);
printf("Enter a operator: ");
scanf(" %c", &op);
printf("Enter the second number: ");
scanf("%lf", &num2);

if(op == '+'){
    printf("%f", num1 + num2);
} else if(op == '-'){
printf("%f", num1 - num2);
} else if(op == '*'){
printf("%f", num1 * num2);
} else if(op == '/'){
printf("%f", num1 / num2);
} else if(op == '%'){
printf("%f", num1 * num2 / 100);
} else {
printf("Invalid Operator");
}

    return 0;
}
