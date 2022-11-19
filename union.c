#include<stdio.h>
 struct book
 {
     int a;
     float b;
     char c;
 };
 union books
 {
     int a;
     float b;
     char c;
 };
 int main()
 {
     printf("Size of an structure : %d\n",sizeof(struct book));
     printf("Size of an union : %d\n",sizeof(union books));
 }
