//13.	program to calculate the area of a rectangle using functions
#include<stdio.h>
#include<conio.h>
void rectangle(void);
int main()
{
	
	rectangle();
	
	getch();
}
void rectangle(void)
{
	int area,l,b;
	printf("Enter the length-->");
	scanf("%d",&l);
	
	printf("Enter the breadth-->");
	scanf("%d",&b);
	area=l*b;
	printf("\narea of rectangle=%d",area);
}
