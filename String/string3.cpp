#include<stdio.h>
#include<conio.h>
int main()
{
	char str[100];
	int i,count=0,vol=0;
	printf("enter a string-->");
	scanf("%s",&str);
	for(int i=0;str[i]!='\0';i++)
	//!='\0' is optional
	
	{
		if(str[i]=='a'|| str[i]=='A'|| str[i]=='e'|| str[i]=='E'|| str[i]=='i' || str[i]=='I' || str[i]=='o'|| str[i]=='O'|| str[i]=='u'|| str[i]=='U'){
		vol++;
		}
	else{
	count++;
	}
	
	}
	
	printf("vowel=%d",vol);
	printf("consonent=%d",count);
	getch();
}
