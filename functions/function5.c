#include<stdio.h>
int arr( int[],int  );
int main() {
int k;
printf("enter the array value:");
scanf("%d",&k);
int a[k];
for(int i=0;i<k;i++) {
      scanf("%d",&a[i]);
}
arr(a,k);
return 0;
}
int  arr( int a[], int k) {
for(int i=0;i<k;i++) {
printf("array[%d]=%d\n",i,a[i]);
}
return 0;
}


