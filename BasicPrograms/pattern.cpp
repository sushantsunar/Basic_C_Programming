#include<stdio.h>
#include<conio.h>
int main()
{
	
	for(int i=1;i<=3;i++)
	{
		for(int j=3;j>=i;j--)
		printf(" ");
		{
		for(int k=1;k<=i*2-1;k++)
		
		printf("*");
		}
		printf("\n");
	}
getch();
}
