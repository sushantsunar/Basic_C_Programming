#include<stdio.h>
#include<conio.h>
#define MAX_LINE 1024
#include<string.h>
#include<stdbool.h>
int main()
{
	char buffer[MAX_LINE];
	FILE *fptr;
fptr=fopen("filename.txt","a");
if (fptr == NULL)
{
	printf("Error opening file.\n");
	return 1;
}
printf("Enter 'quit' to exit.\n");
do{
	fgets(buffer, MAX_LINE, stdin);
	if (strcmp(buffer, "quit\n") == 0)
	break;
	fputs(buffer, fptr);	
}
	while(true);
fclose(fptr);
	getch();
}

