//Find the average from an array.
#include<stdio.h>
#include<conio.h>
int main()
{
 	int i,n[10],sum=0,avg;
	
	for(i=0;i<10;i++)
	{
		printf("enter a number");
		scanf("%d",&n[i]);
		sum=sum+n[i];
	}
	
printf("%d\n",sum);
avg=sum/10;
printf("%d",avg);
getch();
}
