#include<stdio.h>
#include<conio.h>
int main()
{
	char str1[100];
	int i,count;
	printf("enter a string-->");
	scanf("%s",str1);
	for(int i=1;str1[i]!='\0';i++)
	{
		
		count++;
	}
	printf("%d",count);
	getch();
}
