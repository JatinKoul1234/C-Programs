#include<stdio.h>
    struct student
    {
        int r,q,t,total,per;
    };
    int main()
    {
        struct student s;
        FILE *p;
        p=fopen("student.dat","w");
        printf("Enter the math,physics and english");
        scanf("%d%d%d",&s.r,&s.q,&s.t);
        s.total=s.r+s.q+s.t;
        s.per=(s.total*100)/300;
        fwrite(&s,1,sizeof(s),p);
        fclose(p);
        p=fopen("Student.dat","r");
        fread(&s,1,sizeof(s),p);
        printf("%d\t%d",s.total,s.per);
        fclose(p);
    }
