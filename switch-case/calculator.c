#include<stdio.h>
int main() {
float a,b;
float result;
printf("enter the a,b value:");
scanf("%f%f",&a,&b);
char operator;
printf("enter the operator:");
scanf("\n%c",&operator);

switch(operator) {
case '+' :printf("addition is %f\n",a+b);
          break;
case '-':printf("subtraction is %f\n",a-b);
          break;
case '*':printf("multiplication is %f\n",a*b);
          break;
case '/':printf("division is %f\n",a/b);
          break;
 default : printf("enter the valid operator\n");
}
return 0;
}
