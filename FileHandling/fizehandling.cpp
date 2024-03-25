#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
	char name[20];
	int age;
	int salary;	
	fptr=fopen("filename1.txt","w");
	if(fptr==NULL){
	printf("FILE DOES NOT EXIST");
		return 1;
	}
	printf("enter a name");
	gets(name);
	fprintf(fptr,"Name = %s", name);
	printf("enter the age");
	scanf("%d",&age);
	fprintf(fptr,"Age =%d", age);
	printf("enter the salary");
	scanf("%d",&salary);
	fprintf(fptr,"salary =%d", salary);
	
	fclose(fptr);
	
	getch();
}
