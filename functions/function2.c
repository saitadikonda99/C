#include<stdio.h>
int sum();          //function declaration
int main() {
int s;
s=sum();             //calling function
printf("sum=%d\n",s);
return 0;
}
int sum() {         //function definition 
int a,b;
printf("enter the a,b values:");
scanf("%d%d",&a,&b);
int sum=a+b;
return sum;
}
