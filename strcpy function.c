#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20],s2[20];
	printf("Enter the strings");
	scanf("%s",&s1);
	strcpy(s2,s1);
	printf("string is %s",s2);
	return 0;
}
