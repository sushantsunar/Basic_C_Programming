#include<stdio.h>
#include<conio.h>
void power(void);
int main()
{
	power();
	getch();
}
void power(void)
{
	int n,i,p,q=1;
	printf("enter a number-->");
	scanf("%d",&n);
	printf("enter a power-->");
	scanf("%d",&p);
	for(i=1;i<=p;i++)
	{
	    q=q*n;
	}
	printf("%d",q);
	
}





















