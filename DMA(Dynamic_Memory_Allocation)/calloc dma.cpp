#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
main(){
	int *ptr,num,i;
	printf("enter an number of integer you want-->");
	scanf("%d",&num);
	ptr=(int*)calloc(num, sizeof(int));
	if(ptr==NULL)
	{
		printf("memory is not available");
		exit(1);
	}
	for(i=0;i<num;i++)
	{
		printf("enter an integer-->");
		scanf("%d", ptr+i);
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n",*(ptr+i));
		//	printf("%p\n",ptr+i);
		
	}
	getch();
}

