#include<stdio.h>
void main()
{
	int choice;
	float rad,side,leng,bre;
	printf("Circle");
	printf("\n2 Square");
	printf("\n3 Rectangle");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
		printf("Enter the radius of circle ");
		scanf("%f",&rad);
		printf("Area =%g\n perimeter=%g",3.14*rad*rad,2*3.14*rad);
		break;
		case 2:
			printf("Enter the length and breadth of rectangle\n");
            scanf("%f",&side);
			printf("Area=%g\n perimeter=%g",side*side,4*side);
			break;
			case 3:
			printf("enter the length and breadth of rectangle \n");
			scanf("%f%f",&leng,&bre);
			printf("Area =%g\n perimeter =%g",leng*bre,2*(leng+bre));
			break;
			default:
			printf("Invalid");			
	}
}
