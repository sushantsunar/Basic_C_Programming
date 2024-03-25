//2.	Program to read Student Details and Calculate total and average using structures
#include<stdio.h>
#include<conio.h>
	struct student{
		char name[100];
		int roll;
		float mark;
	}; 
int main()
{
	struct student s1[5];
	int i,sum;
	float average;
	for(i=0;i<2;i++)
	{
		printf("enter a name-->");
		scanf("%s",s1[i].name);
		printf("enter a roll-->");
		scanf("%d",&s1[i].roll);
		printf("enter a mark-->");
		scanf("%f",&s1[i].mark);
		
		sum=sum+s1[i].mark;
		
	 } 
	 average=(double)sum/2;
	 printf("total=%d",sum);
	  printf("average=%f",average);
	 getch();
}
