#include<stdio.h>
#include<stdlib.h>

int main() {
	int n;
	printf("enter number of elements : ");
	scanf("%d",&n);
	int *sai;
        sai=(int*)malloc(n*sizeof( int ));
          
  for( int i=0;i<n;i++) {
        	printf("enter the %d element : ",i);
		scanf("%d",(sai+i));
                }
  for( int i=0;i<n;i++) {
                if( *sai < *(sai+i ) )
                *sai = *(sai+i);
                }	      
	printf("highest number = %d" , *sai);
  	printf("\n");
        free(sai);
	return 0;
        }
