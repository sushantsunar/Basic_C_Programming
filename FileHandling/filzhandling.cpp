#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("sushant.txt","w+");
	char str1;
	gets("str1");
	int a=20;
	printf("i love nepal");
	fclose(fptr);
	fptr=fopen("sushant.txt","r");
	fprintf(fptr,"%d",a);
		fscanf(fptr,"%d",&a);
	fclose(fptr);
	
	getch();
}
