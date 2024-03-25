//12.	write a program to copy element of one array into another array
#include<stdio.h>
#include<conio.h>
int main()
{
	int array[5];
	int another[5];
	for(int i=0;i<5;i++)
	{
		printf("enter a number-->");
		scanf("%d",&array[i]);
		
	}
for(int i=0;i<5;i++)
	{
	
	another[i]=array[i];
}
for(int i=0;i<5;i++)
	{
	
		printf("%d \n",another[i]);


}
getch();
}

