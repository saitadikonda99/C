#include<stdio.h>
int main() {

int r,c;
printf("enter the row size:");
scanf("%d",&r);

printf("enter the coloumn size:");
scanf("%d",&c);
int ar[r][c];


for(int i=0;i<r;i++ ) {

for(int k=0;k<c;k++) {

printf("ar[%d][%d]=",i,k);
scanf("%d",&ar[i][k]);
}
  }
int sum=0;
for(int i=0;i<r;i++ ) {
for(int k=0;k<c;k++ ) {
sum=sum+ar[i][k];
}
}

printf("sum = %d\n",sum);
return 0;
}
