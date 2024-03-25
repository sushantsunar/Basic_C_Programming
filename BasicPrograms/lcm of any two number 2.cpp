#include<stdio.h>
#include<conio.h>
int main()
{
	int b,a,m,i,lcm;
	printf("enter two number");
	scanf("%d %d",&a,&b);
	
	m= (a>b)?a:b;
	
	for(i=0;i<=m;i++)
	{
		if(m%a==0 && m%b==0)
		{
		lcm=m;
	
		break;
			
		}
	
	m++;	
	
	}
	printf("lcm=%d",lcm);
//	printf("m=%d",m);
	getch();
}
