//8.	program to find the sum of two matrix
#include <stdio.h>
#include<conio.h>

int main()
{

	int a[2][2];
	int b[2][2];
int n[2][2];
          	  
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
{
	printf("enter number");
          	 scanf("%d",&a[i][j]);

}

}
 printf("\n");
 for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
{
	printf("enter number");
          	 scanf(" %d",&b[i][j]);
}
}
printf("\n");
for(int i=0;i<2;i++)
{
	for(int j=0;j<2;j++)
{
n[i][j]=a[i][j]-b[i][j];

}
}

for(int i=0;i<2;i++)

{
    printf("\n");
	for(int j=0;j<2;j++)
{
printf("%d\t",n[i][j]);

}
}
  getch();
}
