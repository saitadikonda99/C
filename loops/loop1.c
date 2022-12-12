#include<stdio.h>
int main() {
char name[99];
int prints;
printf("enter your name:");
scanf("%[^\n]",name);
printf("how many times you want to print:");
scanf("%d",&prints);
for(int i=1;i<=prints;i++) {
  printf("%s\n",name);
} 
return 0;
}
