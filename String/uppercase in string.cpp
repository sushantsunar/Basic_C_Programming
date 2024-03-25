//18.	write a program to convert all lowercase characters in a string to uppercase
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[10];
	printf("enter a string-->");
	scanf("%s",&str);
	printf("%s",strupr(str));
	getch();
}
