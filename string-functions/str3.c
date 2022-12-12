#include<stdio.h>
#include<string.h>

int main() {
char sai[99];
puts("enter the string:");
scanf("%[^\n]",sai);
char tadikonda[strlen(sai)];

//copying from one string to another string 

strcpy(tadikonda, sai );

puts(tadikonda);
return 0;
}
