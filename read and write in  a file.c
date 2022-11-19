#include<stdio.h>
struct student 
{
	char name[20];
	int age,rollno;
};
int main()
{
struct student s;
FILE*p;
p=fopen("jatin.dat","w");
printf("enter the name,age and roll no");
scanf("%s%d%d",&s.name,&s.age,&s.rollno);
fwrite(&s,1,size of (s),p);
fclose(p);
p=fopen("jatin.dat","r");
fread(&s,1,size of (s),p);
printf("%s%d%d",s.name,s.age,s.rollno);
fclose(p);
}
