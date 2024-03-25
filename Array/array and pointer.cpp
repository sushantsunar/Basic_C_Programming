#include<stdio.h>
#include<conio.h>
main()
{
	int a=20;
   	char b='ss';
   	char *ptrb=&b;
	int* ptra= &a;
	printf("%d\n", ptrb);
	printf("%d\n", ptrb+1);
	
	printf("%d\n", ptra);
	printf("%d", ptra+1);
	getch();
}
