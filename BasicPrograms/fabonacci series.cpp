#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a=0,b=1,i,c;
	printf("enter a number");
	scanf("%d",&n);
	printf("%d %d ", a, b);
	for(i=1;i<=n-2;i++)
	{
		c=a+b;
		printf("%d ",c);
		a=b;
		b=c;
	}
	getch();
}
