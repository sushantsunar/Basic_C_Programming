#include<stdio.h>
#include<conio.h>

int main()
{

	int numbers[5];

for(int i=0;i<5;i++)
{
	printf("enter a number-->");
          	 scanf("%d",&numbers[i]);
}
	for(int i=0;i<5;i++)
{
	
          	 printf("\n%d",numbers[i]);
}
	
	
	getch();
}
