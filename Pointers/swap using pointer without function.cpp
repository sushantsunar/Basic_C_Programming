#include<stdio.h>
#include<conio.h>
int main()

//2.	program to swap two numbers using pointer
{
	
int num1,num2,temp,*a,*b;
a=&num1;
b=&num2;

	printf("enter a number-->");
	scanf("%d",&num1);
printf("enter a number-->");
	scanf("%d",&num2);
	temp=*a;
	*a=*b;
	*b=temp;
          
		 printf("\nnum1=%d num2=%d",num1,num2);
	
	 getch();
}
