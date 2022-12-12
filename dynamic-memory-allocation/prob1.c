#include<stdio.h>
#include<stdlib.h>

int main() {

int *p;
p=( int* )malloc( 1*sizeof( int ) );
char *c;
c=(char*)malloc(1*sizeof( char ) );
float *f;
f=(float*)malloc(1*sizeof( float ) );


printf(" ---- enter the values ---- " );
scanf("%d%c%f",p,c,f);
printf("%d%c%f",*p,*c,*f);

return 0;
}
