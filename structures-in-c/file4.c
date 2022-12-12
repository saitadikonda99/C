#include<stdio.h>
#include<string.h>

struct com {
int name;
int em[99];


};

int main() {
int n;
printf("enter no of employees: ");
scanf("%d",&n);

struct com k[n];
for(int i=0;i<n;i++ ) {
printf("em[%d]= ",i );
scanf("%d",&k[i].em);
}

printf("employees who are getting salary more than 65000\n");

for(int i=0;i<n;i++ ) {
if(k[i].em>=65000)
printf("%d\n" ,k[i].em );
}	
return 0;
}
