#include<stdio.h>
int main()  {

int r,c,SR,SC;

printf("enter the number of rows:");
scanf("%d",&r);

printf("enter the number of columns:");
scanf("%d",&c);

int ar[r][c];
for(int i=0;i<r;i++) {

for(int k=0;k<c;k++) {
printf("ar[%d][%d]=",i,k);
scanf("%d",&ar[i][k]);

}
    }
for(int i=0;i<r;i++ ) {

SR=SC=0;

for(int k=0;k<c;k++ ) {

SR=SR+ar[i][k];
SC=SC+ar[k][i];
   }

printf("sum of row-%d =%d\n",i,SR);
printf("sum of column-%d =%d\n",i,SC);
  }
return 0;
 }  

