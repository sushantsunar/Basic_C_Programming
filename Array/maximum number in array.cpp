#include<stdio.h>
#include<conio.h>
int main()
{
	int max,i,n,num[100];
	printf("how many number do you want to insert in array-->");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter a number-->");
		scanf("%d",&num[i]);
	}
	max=num[0];
	for(i=0;i<n;i++)
	if(num[i]>max)
	{
		max=num[i];
	}
	printf("%d",max);
	getch();
}
