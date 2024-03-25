//Multiplication Table of 1 to 12.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	for(i=1;i<=12;i++)
	{
	printf("\n");
	
		for(j=1;j<=10;j++)
		{
			n=j*i;
			printf("%d * %d =%d ",i,j,n);
			printf("\n");
	
		}

	}
	
getch();
}
