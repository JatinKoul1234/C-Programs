#include<stdio.h>
void swap(int,int);
void main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	swap(a,b);
}
void swap(int x,int y)
{
	int c;
	c=x;
	x=y;
	y=c;
	printf("%d%d",x,y);
}
