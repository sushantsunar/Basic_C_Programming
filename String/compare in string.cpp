//16.	write a program to compare two strings
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10],x;
	printf("enter first string");
	scanf("%s",&str1);
		printf("enter second string");
	scanf("%s",&str2);
	//x=strcmp(str1,str2);
	printf("%d",strcmp(str1,str2));

	getch();
}
