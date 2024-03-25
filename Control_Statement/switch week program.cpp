#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("enter a character-->");
	scanf("%c",&ch);
	switch(ch){
		case 'm':
		case 'M':
		printf("monday");
		break;		
				case 't':
					case 'T':
					printf("tuesday");
		break;			
						case 'W':
			case 'w':
				printf("wednesday");
		break;		
			case 'H':
				case 'h':
					printf("thursday");
		break;		
			case 'f':
			case 'F':
				printf("friday");
		break;		
				case 'S':
					case 's':
					printf("saturday");
		break;			
						case 'N':
							case 'n':
	printf("sunday");
		break;		
		default:
			printf("invalid");
		break;		
	}
}
