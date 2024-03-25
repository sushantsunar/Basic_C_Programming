#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fptr;
fptr=fopen("filename.txt","w");
fprintf(fptr,"hello Nepal");
int i;
for(i=1;i<=100;i++)
{
	fprintf(fptr,"my name is sushant\n");
}

fclose(fptr);

fptr=fopen("filename.txt","a");
fprintf(fptr,"hello Nepal");
//int i;
for(i=1;i<=100;i++)
{
	fprintf(fptr,"hello Guyz\n");
}
fclose(fptr);
	getch();
}

