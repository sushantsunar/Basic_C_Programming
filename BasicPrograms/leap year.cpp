#include<stdio.h>
#include<conio.h>
main(){
	int year;
	printf("enter a year-->");
	scanf("%d",&year);
	if((year%4==0)&&((year%400==0)||(year!=0)))
	{
		printf("it is a leap year");
	}
	else{
		printf("not a leap year");
	}
	getch();
}
