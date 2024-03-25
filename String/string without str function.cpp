#include<stdio.h>
#include<conio.h>
main()
 {
  	char str[100];
	int i;
	printf("enter a character-->");
	scanf("%s",str);
	for(i=0;str[i];i++)
	{
		str[i]=str[i]-32;
	}
			printf("%s",str);

			getch();
}

