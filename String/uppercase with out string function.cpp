#include<stdio.h>
#include<conio.h>
main()
{
	char s[100];
	printf("enter a string");
	scanf("%s",s);
	for(int i=0;s[i];i++)
	{
		if(s[i]>=97 && s[i]<=122)
		s[i]-=32;
	}
	printf("%s",s);
	getch();
}
