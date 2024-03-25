
#include <stdio.h>

#include<conio.h>
int main() {
    int matrix1[2][2];
    int matrix2[2][2];
    int multiple[2][2];


    printf("Enter the elements of the matrix1:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix1[i][j]);
        }
   

    }
printf("Enter the elements of the matrix2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            scanf("%d", &matrix2[i][j]);
        }
                printf("\n");

    }

    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            multiple[i][j] = matrix1[i][j]*matrix2[i][j];
        }
    }

    
    printf("multipication of two matrix is:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d  ", multiple[i][j]);
        }
        printf("\n");
    }

    return 0;
}
