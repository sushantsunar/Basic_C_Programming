//17.	write a program to find the length of a string
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("enter a string-->");
	scanf("%s",&str);
	printf("%d",strlen(str));
	getch();
}
