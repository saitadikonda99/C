#include<stdio.h>
int main() {

int r,c;
printf("enter the row size:");
scanf("%d",&r);

printf("enter the column size:");
scanf("%d",&c);

printf("enter the first matrix\n");

int a[r][c];

for(int i=0;i<r;i++) {
for(int k=0;k<c;k++) {
  printf("a[%d][%d]=",i,k);
scanf("%d",&a[i][k]);
}
  }
printf("----------------------------------------------------------------------------------------\n");
printf("enter the second matrix:\n");
int b[r][c];
for(int i=0;i<r;i++) {
for(int k=0;k<c;k++) {
  printf("b[%d][%d]=",i,k);
scanf("%d",&b[i][k]);
}
  }
printf("----------------------------------------------------------------------------------------\n");
int z[r][c] ;

for(int i=0;i<r;i++) {
for(int k=0;k<c;k++) {

z[i][k]=a[i][k]+b[i][k];
printf("%d ",z[i][k]);
}
  printf("\n");

  }
return 0;
}
