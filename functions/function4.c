#include<stdio.h>
int sum(int , int );
void main() {
int a,b,s;
printf("enter the a,b values:");
scanf("%d%d",&a,&b);
s=sum(a,b);  
printf("sum =%d\n",s);        
}
int sum(int x,int y)  {
int s;
s=x+y;
return s;
}

