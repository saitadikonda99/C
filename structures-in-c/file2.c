#include<stdio.h>
struct details {
	char name[20];
	int id;
	char des[20];
int salary;
        } s;

int main() {

struct details s,*p;


p=&s;

printf("enter the name of the employee:");
scanf("%s",s.name);

printf("enter the salary of the employee:");
scanf("%d",s.salary);
printf("enter the designation of the employee:");
scanf("%s",s.des);

printf("enter the id of the employee:");
scanf("%d",s.id);


printf("name=%s\nid=%d\nsalary=%d\ndesignation=%s\n,p->name",p->id,p->salary,p->des);

return 0;

}
