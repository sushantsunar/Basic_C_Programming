#include<stdio.h>
#include<conio.h>
struct student{
	int id;
	int Class;
	char name;

};
int main()
{
	struct student st[10];
	int i;

	for(i=0;i<3;i++)
	{
		printf("enter a id-->");
		scanf("%d",&st[i].id);
		printf("enter a Name-->");
		scanf("%d",&st[i].Class);
		printf("enter a Name-->");
		scanf("%s",&st[i].name);
		
	}
		for(i=0;i<3;i++)
	{
	 
		printf("%d",st[i].id);
		printf("%d",st[i].Class);
		printf("%s",st[i].name);
	 
		
	}
}
