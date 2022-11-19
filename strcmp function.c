#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("Enter two strings");
	scanf("%s%s",&s1,&s2);
	if(strcmp(s1,s2)==0)
	printf("equal strings");
	else
	printf("unequal strings");
	return 0;
}
