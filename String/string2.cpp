#include<stdio.h>
#include<conio.h>
int main()
{
	char str1[100];
	int i,count=0;
	printf("enter a string-->");
	scanf("%s",str1);
	for(int i=0;str1[i]!='\0';i++)
	//!='\0' is optional
	{
		
		count++;
	}
	printf("%d",count);
	getch();
}
