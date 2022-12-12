#include<stdio.h>
char arr( char[],int  );
int main() {
int k;
printf("enter the array value:");
scanf("%d",&k);
char a[0];
for(int i=0;i<k;i++) {
      scanf("%[^\n]",a);
}
arr(a,k);
return 0;
}     
char arr( char a[], int k) {
printf("%s",a);
return 0;
}
