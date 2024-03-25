//11.	program to find the transpose of a matrix
#include <stdio.h>

#include<conio.h>
int main() {
    int matrix[2][2];
    int transpose[2][2];


    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix[i][j]);
        }
   

    }
printf("Elements of the matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d  ", matrix[i][j]);
        }
                printf("\n");

    }

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    printf("The transpose of the matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d  ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
