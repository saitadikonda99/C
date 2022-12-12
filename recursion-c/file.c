#include<stdio.h>

int natural(int );

int natural(int n) {

if(n!=0)
return n+natural(n-1);
else
return n;
}

int main() {
int n;
printf("enter the n value:");
scanf("%d",&n);

int res=natural(n);
printf("%d\n",res);
return 0;
}
