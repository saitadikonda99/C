#include<stdio.h>
int main() {

int r,c;
printf("enter the row size:");
scanf("%d",&r);

printf("enter the coloumn size:");
scanf("%d",&c);

int ar[r][c];
for(int i=0;i<r;i++ ) {
for(int k=0;k<c;k++ ) {
printf("ar[%d][%d]= " , i ,k );
scanf("%d",&ar[i][k]);
}

for(int i=0;i<r;i++ ) {
for(int k=0;k<c;k++ ) {
printf("%d " , ar[i][k]);
          }
printf("\n");
}
}
return 0;
}
