#include<stdio.h>
#include<conio.h>
void swap(int *x,int *y);
int main()
{
//2.	program to swap two numbers using function
int num1,num2;
	printf("enter a number-->");
	scanf("%d",&num1);
printf("enter a number-->");
	scanf("%d",&num2);

	swap(&num1,&num2);
	printf("\nnum1=%d num2=%d",num1,num2);
	
	getch();
}
void swap(int *x,int *y)
{
	
   
	 int temp=*x;
	*x=*y;
	*y=temp;
          	 
}
