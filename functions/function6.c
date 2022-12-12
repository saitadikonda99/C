#include<stdio.h>
int str(char[] );
int main() {
char sai[99];
printf("enter your name:");
scanf("%[^\n]",sai);
str(sai);
return 0;
}
int str(char s[] ) {
printf("%s\n",s);
return 0;
}
