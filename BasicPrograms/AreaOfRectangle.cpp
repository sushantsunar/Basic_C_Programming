#include<stdio.h>
#include<conio.h>
main(){
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d",j);
			
		}
		printf("\n");
	}
	
	int r,l=10,b=20;
	r=2*(l+b);
	printf("area of rectangle=%d",r);
	getch();
}
