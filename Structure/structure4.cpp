//2.	4.	Write a C program using structure that reads the record of 35 students with member's roll, 
//name, address and marks and display the records of students who have obtained greater than 250 marks.
#include<stdio.h>
#include<conio.h>
	struct student{
		char name[100];
		int roll;
		float mark;
	}; 
int main()
{
	struct student s1[35];
	int i,count=0;
	
	for(i=0;i<35;i++)
	{
		printf("enter a name-->");
		scanf("%s",s1[i].name);
		printf("enter a roll-->");
		scanf("%d",&s1[i].roll);
		printf("enter a mark-->");
		scanf("%f",&s1[i].mark);
		

}
for(i=0;i<35;i++){
	if(s1[i].mark>250)
	{
		printf("name=%s\n",s1[i].name);
		printf("roll=%d\n",s1[i].roll);
		printf("mark=%.2f\n",s1[i].mark);
		}	
		count++;
		
}
	printf("Number of student who get more than 250=%d",count);
	 getch();
}
