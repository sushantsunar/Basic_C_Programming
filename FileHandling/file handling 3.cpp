#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("sushant.txt","w");
	fprintf(fptr,"i love nepal");
	printf("i love nepal");
	fclose(fptr);
	getch();
}
