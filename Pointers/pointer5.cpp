#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	//strcat using pointer
	char a,str1[100],str2[100],*p;
	p=str2;
	
	printf("enter a string-->");
	scanf("%s",str1);
printf("enter a string-->");
	scanf("%s",str2);
	strcat(p,str1);
	printf("%s",p);	
	getch();
}
