#include<stdio.h>
int amount();                                              //function declaration
void main() {
amount();                                                  //function calling
}
int amount() {                                             //funciton definition
int x;
printf("enter the amount of items:");
scanf("%d",&x);
if(x<=100) {
printf("raghu has to pay :%d\n",x);
}
else if(x>100&&x<=1000)
{
printf("raghu has to pay :%d\n",x-25);                       //discount =25
}
else if(x>1000&&x<=5000) {
printf("raghu has to pay :%d\n",x-100);                      //discount =100
}
else {
printf("raghu has to pay : %d\n",x-500);                      //discount =500
}
return 0;
}

