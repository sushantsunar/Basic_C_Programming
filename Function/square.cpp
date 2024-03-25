#include<stdio.h>
#include<conio.h>
void square(int num);
int main()
{
	//1.	program to find the square of a number using function
	int num;
	printf("enter a number-->");
	scanf("%d",&num);

	square(num);
          	 printf("\n%d",num);
	
	//call by refrence
	getch();
}
void square(int num)
{
	
	printf("square=%d\n",num*num);
	 
}
