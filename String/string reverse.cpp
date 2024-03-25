#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
// char str1[100], x[100];
//    int i, j;
//
//    printf("Enter a string: ");
//    scanf("%s", str1);
//
//    j = 0;
//    for (i = strlen(str1) - 1; i >= 0; i--) {
//        x[j] = str1[i];
//        j++;
//    }
//    x[j] = '\0'; // add null terminator to end the string
//    
//    printf("Reversed string: %s\n", x);
//    
    char str1[100], x[100];
    int i, j;

    printf("Enter a string: ");
    scanf("%s", str1);

    j = 0;
    for (i = 0; str1[i] != '\0'; i++);
    for (i--; i >= 0; i--) {
        x[j] = str1[i];
        
        j++;
    }
    x[j] = '\0'; // add null terminator to end the string
    
    printf("Reversed string: %s\n", x);
   if (strcmp(str1, x) == 0) {
        printf("The input string is a palindrome.\n");
    } else {
        printf("The input string is not a palindrome.\n");
    }

	getch();
}
