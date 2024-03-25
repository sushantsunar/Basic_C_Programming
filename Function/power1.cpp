#include<stdio.h>
#include<conio.h>
#include<math.h>
void power(void);
main()
{
	
	power();
	getch();
}
void power(void)
{
	int x,a,b;
	printf("enter a number-->");
	scanf("%d",&a);
	printf("enter a number-->");
	scanf("%d",&b);
	x=pow(a,b);
	printf("%d",x);
}
