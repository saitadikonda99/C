#include<stdio.h>
void fun(int* , int*);
void main() {
int x=5,y=10;
fun(&x,&y);                    //calling function
printf("x=%d,y=%d\n",x,y);
}
void fun (int* x ,int* y ) {

*x=5;
*y=5;                         //called function
printf("x=%d,y=%d\n",*x,*y);
}
