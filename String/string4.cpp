#include<stdio.h>
#include<conio.h>
int main()
{
   char str1[100];
	
    printf("Enter a string: ");
    scanf("%s", str1);

    int i;
    for (i = 0; str1[i]!='\0'; i++)
    {
    }

    int j;
    for (j = i - 1; j >= 0; j--)
    {
        printf("%c", str1[j]);
    }
	getch();
}
