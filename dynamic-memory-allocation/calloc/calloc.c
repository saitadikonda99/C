#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	printf("enter the n value: ");
    	scanf("%d",&n);
	int *sai;
 	sai=( int* )calloc( n , sizeof( int ) );
 for( int i=0;i<n;i++) {
		printf("enter the %d element: ",i);
		scanf("%d",sai+i );
     		}
 for( int i=0;i<n;i++) 
		printf("%d ",*(sai+i)); 
		printf("\n");
		free(sai);
	return 0;
		}
