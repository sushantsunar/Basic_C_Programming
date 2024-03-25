#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,j=2,k=3,m=4;
	i+=j+k;
	printf("i+=j+k=%d\n",i);
	j*=k;
		printf("j*=k=%d\n",j);

	j*=k=m+5;
	printf("j*=k=m+5=   %d\n",j);
	
	k-=m/=j*2;
	printf("k-=m/=j*2 =%d\n",k);
	getch();
}
