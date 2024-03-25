#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int *ptr,i;
	

	ptr=(int*)malloc(5* sizeof(int));
		if(ptr==NULL)
	{
		printf("memory is not available");
		exit(1);
	}
	for(i=0;i<5;i++)
	{
		printf("enter 5 integer-->");
		scanf("%d", ptr+i);
	}
	ptr=(int*)realloc(ptr, 8*sizeof(int));
	if(ptr==NULL)
	{
		printf("memory is not available");
		exit(1);
	}
		for(i=5;i<8;i++)
	{
		printf("enter more 3 integer-->");
		scanf("%d", ptr+i);
	}
	for(i=0;i<8;i++)
	{
		printf("%d\n",*(ptr+i));
			printf("%p\n",ptr+i);
		
	}
	getch();
}

