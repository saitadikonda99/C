#include<stdio.h>
int main() {
int number;
printf("enter the number: ");
scanf("%d",&number);
int count =0;
for(int i=1;i<=number;i++) {
  if(number%i==0)  {
count++;
}
}
if(count==2) {
printf("prime number\n");
}
else {
printf("not a prime number\n");
}
return 0;
}
