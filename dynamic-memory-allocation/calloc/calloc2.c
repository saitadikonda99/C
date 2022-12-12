	
#include<stdio.h>
#include<stdlib.h>

int main() {
        int n;
        printf("enter number of elements : ");
        scanf("%d",&n);
        int *sai;
        sai=(int*)malloc(n*sizeof( int ));

  for( int k=0;k<n;k++) {
                printf("enter the %d element : ",k);
                scanf("%d",(sai+k));
                }
  for( int k=0;k<n;k++) {
                if( *sai > *(sai+k ) )
                *sai = *(sai+k);
                }
        printf("smallest number = %d" , *sai);
        printf("\n");
        free(sai);
        return 0;
        }
