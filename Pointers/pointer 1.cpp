#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,sum;
	int *p,*c,*d;
	c=&a;
	d=&b;
	p=&sum;
	printf("enter a number-->");
	scanf("%d %d",&a,&b);
	sum=*c+*d;
	printf("%d",*p);
	printf("%p",*p);
	getch();
}
