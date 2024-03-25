#include<stdio.h>
#include<conio.h>
int main()
{
char ch;
		printf("enter an alphabet \n");
		scanf("%c",&ch);
	if(ch=='a' ||  ch=='A' ||ch=='e' || ch=='E' || ch=='I' || ch=='i' || ch=='o' || ch=='O' || ch=='u' || ch=='u' ){
	printf("vowel");
	}
	else{
		printf("it is a consonent");
	}
getch();
}
