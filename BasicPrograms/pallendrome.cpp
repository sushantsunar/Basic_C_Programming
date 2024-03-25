#include<stdio.h>
#include<conio.h>
int main()
{
	int r=0,n,t;
	printf("enter a number-->");
	scanf("%d",&n);
	t=n;
	while(t != 0)
	{
	r = r * 10;
    r = r + t%10;
    t = t/10;
	}
	if(n==r){
	printf("pallendrome=%d",n);
	}
	else{
	printf("not a pallendrome=%d",n);
	}
	getch();
	
}
