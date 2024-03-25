#include<stdio.h>
#include<conio.h>
void swap(void);
int main()
{
//2.	program to swap two numbers using function
	swap();
	
	getch();
}
void swap(void)
{
	
int num1,num2,temp;
	printf("enter a number-->");
	scanf("%d",&num1);
printf("enter a number-->");
	scanf("%d",&num2);
	temp=num1;
	num1=num2;
	num2=temp;
          
		 printf("\nnum1=%d num2=%d",num1,num2);
	
	 
}
