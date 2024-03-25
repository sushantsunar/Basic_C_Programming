#include<stdio.h>
#include<conio.h>
struct student{
	int id;

	char name[20];

} st[100];
int main()
{
//	struct student st[10];
	int i,n;
	printf("enter a number-->");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter a id-->");
		scanf("%d",&st[i].id);
	
		printf("enter a Name-->");
		scanf("%s",&st[i].name);
		
	}
		for(i=0;i<n;i++)
	{
	 
		printf("Name=%s\n",st[i].name);
		printf("Id=%d\n",st[i].id);
	 
		
	}
	getch();
}
