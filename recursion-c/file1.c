#include<stdio.h>


int fact(int );

int fact(int n) {

if( n>0 ) {
return n*fact(n-1);
}
else 
return 1;
}

int main() {

int n;
printf("enter the n value:");
scanf("%d",&n);

int res=fact(n);
printf("%d\n",res);

return 0;
}
