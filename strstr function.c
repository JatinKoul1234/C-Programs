#include<stdio.h>
#include<string.h>
int main()
{
	char s1[]="hello for world";
	char s2[]="for";
	char*p;
	p=strstr(s1,s2);
	if(p)
	{
	strcpy(p,"strings");
	printf("string found\n");
	printf("%s",s1);
}
else
{
	printf("string not found\n");
}
	return 0;
}
