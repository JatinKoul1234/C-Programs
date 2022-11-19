#include<stdio.h>
#include<string.h>
int main()
{
	char s1[30];int length;
	printf("Enter the strings");
	scanf("%s",&s1);
	length=strlen(s1);
	printf(" length of the string is %d",length);
	return 0;
}
