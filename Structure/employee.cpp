#include<stdio.h>
#include<conio.h>
	struct employee{
		char Emp_name[100];
		int Emp_age;
		int Emp_salary;
	}; 
int main()
{
	FILE *fptr;
	int i,max;
	struct employee st[10];
	fptr=fopen("Emp.dat","w");
	for(i=0;i<10;i++){
	
	printf("Enter a Name-->");
	scanf("%s",st[i].Emp_name);
	fprintf(fptr,"%s",st[i].Emp_name);
	
	printf("Enter a Age-->");
	scanf("%d",&st[i].Emp_age);
	fprintf(fptr,"%d",st[i].Emp_age);
	
	printf("Enter a salary-->");
	scanf("%d",&st[i].Emp_salary);
	fprintf(fptr,"%d",st[i].Emp_salary);
		
	}
	max=st[i].Emp_salary;
	for(i=0;i<10;i++)
	{
		if(st[i].Emp_salary>max)
		{
			max=st[i].Emp_salary;
		}
		
	}
	printf("max=%d",max);
	fprintf(fptr,"%d",max);
	fclose(fptr);
getch();
}

