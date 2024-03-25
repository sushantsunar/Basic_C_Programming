#include<stdio.h>
#include<conio.h>
main()
{
	int arr[]={1,3,5,8,0};
	//using array
	printf("%d\n",arr[0]);
		printf("%d\n",arr);
	printf("%d\n",&arr[0]);
	
	printf("%d\n",arr[1]);
	printf("%d\n",arr+1);
	printf("%d\n",&arr[1]);	
	//using pointer
	printf("%d\n",*(arr));
	printf("%d\n",*(&arr[0]));
	printf("%d\n",*(arr+1));
	printf("%d\n",*(&arr[1]));	
	getch();
}
