#include<stdio.h>
#include<string.h>

int main() {
//string 1

char git[99];
puts("enter the string1: ");
gets(git);
//string 2

char hub[99];
puts("enter the string2: " );
gets(hub);
//combination of two strings

strcat( git  , hub  );
puts( git );
return 0;
}
