//6.	create a 2d array matrix[2][3] assign the value and show the values
#include<stdio.h>
#include<conio.h>

int main()
{

	int a[2][3]={{2,3,4},{2,5,7}};

for(int i=0;i<2;i++)
{
	for(int j=0;j<3;j++)
{
	
          	 printf("%d\t",a[i][j]);
}
 printf("\n");
}
	
	getch();
}
