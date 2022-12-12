#include<stdio.h>
int main() {
int number;
printf("enter the number:");
scanf("%d",&number);

for(int s=1;s<=10;s++)  {
printf("%d x %d = %d\n",number,s,number*s);
}
return 0;
}
