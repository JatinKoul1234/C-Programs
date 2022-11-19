#include<stdio.h>
 struct employee{
    char    name[30];
    int     empId;
    float   salary;
    int     age;
    char    gender;
};

int main()    
{
struct employee emp;
printf("\n enter deratils ");
printf("name");                             gets(emp.name);
printf("Id");                               scanf("%d",&emp.empId);
printf("Salary");                           scanf("%f",&emp.salary);
printf("enter age \n");                     scanf("%d",&emp.age);
printf("gender\n");                         scanf("%c",&emp.gender);

printf("entered detail is:");
printf("Nmae:%s",emp.name);
printf("Id:%d",emp.salary);
printf("Salary:%f\n",emp.salary);
printf("age:%d\n",emp.age);
printf("gender is :%c",emp.gender);
return 0;
}
