#include<stdio.h>
int main()  {

int r,c;
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

for(int i=0;i<c;i++ ) {
 for(int k=0;k<r;k++ ) {
printf("%d ",ar[k][i]);
}
printf("\n");
}
return 0;
}

