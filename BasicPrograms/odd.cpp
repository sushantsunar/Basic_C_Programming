#include<stdio.h>
#include<conio.h>
int main()
{
	int num1,num2,i,odd=0;
	printf("enter 1st number");
	scanf("%d",&num1);
	printf("enter 2nd number");
	scanf("%d",&num2);
	for(i=num1;i<=num2;i++)
	{
		if(i%2==1)
		{
			odd=odd+i;
		}
	}
	printf("sum=%d",odd);
	getch();
}
