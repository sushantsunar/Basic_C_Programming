//calculator using c programming
#include<stdio.h>
#include<conio.h>
main()
{
	int num1,num2;
	float result;
	char op;
	printf("enter a First Number");
	scanf("%d",&num1);
	printf("Enter a operation");
	scanf(" %c",&op);
	printf("enter a second number");
	scanf("%d",&num2);
	switch(op)
	{
		case '-':
			result=num1-num2;
			printf("Substraction=%f",result);
			break;
			case '+':
			result=num1+num2;
			printf("addition=%f",result);
			break;
				case '*':
			result=num1*num2;
			printf("multipication=%f",result);
			break;
				case '/':
			result=num1/num2;
			printf("division=%f",result);
			break;
				case '%':
			result=num1%num2;
			printf("Modulus=%f",result);
			break;
				default:
			 
			printf("operation is invalid");
			break;	
	}
	getch();
}
