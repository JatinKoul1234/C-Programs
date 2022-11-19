#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30];
	printf("Enter the strings");
	scanf("%s",&s1);
	strrev(s1);
	printf(" reverse of the string is %s",s1);
	return 0;
}
