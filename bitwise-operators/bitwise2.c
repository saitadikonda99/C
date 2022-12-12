#include<stdio.h>
int main() {
int x,y;
printf("enter the x&y value:");
scanf("%d %d",&x,&y);
printf("%d\n",(x^y));                // XOR operator
return 0;
}

