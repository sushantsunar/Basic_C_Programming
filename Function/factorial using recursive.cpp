#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{
int n,x;
	printf("enter a number \n");
	scanf("%d",&n);
	x=fact(n);
	
	printf("%d",x);
getch();
}
 int fact(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else{
		return n*(fact (n-1));
	}
}
