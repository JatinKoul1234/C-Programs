#include<stdio.h>
int sum()
{
    int a,b,sum;
    printf("\nEnter the value of a and b");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("\nSum of two numbers is %d",sum);
}
  int sub()
{
    int a,b,sub;
    printf("\nEnter the value of a and b");    //Declaration part//
    scanf("%d%d",&a,&b);
    sub=a-b;
    printf("\nSub of two numbers is %d",sub);
}
   int div()
   {
    int a,b,div;
    printf("\nEnter the value of a and b");
    scanf("%d%d",&a,&b);
    div=a/b;
    printf("\ndivision of two numbers is %d",div);
   }
   int main()
   {
       sum();
       printf("\nGood job");           //Calling part//
       sub();
       printf("\nBad job");
       div();
       printf("\nYou are the best teacher");
       sum();
       printf("\nGood morning everyone");
   }
