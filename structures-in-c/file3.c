
#include<stdio.h>
#include<string.h>

struct sales {

char prod1[99];
char prod2[99];
int sales_pro1;
int sales_pro2;

} s;


int main() {

 printf("enter the name of the product1: ");
scanf("%s",s.prod1);

printf("enter the name of the product2: ");
scanf("%s",s.prod2);

printf("enter the sales of the product1: ");
scanf("%d",&s.sales_pro2);

printf("enter the sales of the product2: ");
scanf("%d",&s.sales_pro2);

if(s.sales_pro1 > s.sales_pro2) 

printf("%s has max no. of sales\n",s.prod1);

else

printf("%s has max no. of sales\n",s.prod2);

return 0;
}
