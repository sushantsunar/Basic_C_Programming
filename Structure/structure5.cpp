//3.Program to read Item Details and Calculate Total Amount of Items using structure
#include<stdio.h>
#include<conio.h>
struct items{
	char name[20];
	int b;
	float a;
	float amo;
};
int main(){
	float amount;
	struct items s1;
	
		printf("enter a item name-->");
		scanf("%s",s1.name);
	printf("enter a item rate->");
		scanf("%s",&s1.b);
	printf("enter a item price-->");
		scanf("%s",&s1.a);
		amount=s1.a*s1.b;
		printf("amount=%f",amount);
	
	getch();
}
