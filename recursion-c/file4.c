#include<stdio.h>

int power( int ,int );
int main() {
int base, k ;
printf("enter the base value: ");
scanf("%d",&base);

printf("enter the k value :");
scanf("%d",&k);

int result= power( base , k);

printf("%d^%d=%d\n",base,
k,result);
return 0;
}

int power( int base , int k) {
if( k!=0 )

return base*power( base , k-1 );

else

return 1;

}

