#include<stdio.h>
void sum();                     //function declaration
int  main() 
{
 sum();                          //calling function
return 0;                          
}
void sum() {                   //function definition
int a,b;
printf("enter the a,b values:");
scanf("%d%d",&a,&b);
int sum=a+b;
printf("sum =%d\n",sum);
}
