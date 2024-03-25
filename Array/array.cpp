#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n[10],sum=0;
	for(i=0;i<10;i++)
	{
		printf("enter a number");
		scanf("%d",&n[i]);
		sum=sum+n[i];
	}
printf("%d",sum);
getch();
}
