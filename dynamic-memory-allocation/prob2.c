#include<stdio.h>
#include<stdlib.h>
int main() {
int n;
printf("enter the n value : ");
scanf("%d",&n);

int *p;
p=( int * )malloc( n *sizeof( int ) );

for( int i=0;i<n;i++ ) {
     printf(" enter the integer value : ");
scanf("%d",p+i);
}

for( int i=0;i<n;i++ ) 
printf("out values = %d\n",*(p+i));

return 0;
}
