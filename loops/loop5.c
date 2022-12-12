#include<stdio.h>
int main() {
int number;
printf("enter the number: ");
scanf("%d",&number);
int count=0;
for(int i=1;i<number;i++) {
   if(number%i==0) {
count+=i;
}
}
if(count==number) {
printf("perfect number\n");
}
else {
printf("not a perfect number:\n");
}
return 0;
}
