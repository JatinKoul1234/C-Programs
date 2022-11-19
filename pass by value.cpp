#include<stdio.h>
int swap(int,int);
int main()
{
	int x,y;
	printf("\n enter the value of x and y");
	swap(x,y);
	printf("\n after swapping of x is %d and y is %d",x,y);
	return 0;
}
int swap(int a,int b)
{
int temp;
temp=b;
b=a;
a=temp;
printf("\n value of a is %d\n value of b is %d",a,b);
}

