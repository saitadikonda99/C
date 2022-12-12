#include<stdio.h>
int main()
{
    int value[5],i,n,min,max;

    printf("Enter size of the array : ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {   printf("enter the value[%d] = ",i);
        scanf("%d",&value[i]);
    }

    min=max=value[0];
    for(i=1; i<n; i++)
    {
         if(min>value[i])
                  min=value[i];
                   if(max<value[i])
                    max=value[i];
    }
     printf("minimum of array is = %d\n",min);
          printf("maximum of array is = %d\n",max);
int diff=max-min;
printf("difference between max and min is %d\n",diff);

    return 0;
}

