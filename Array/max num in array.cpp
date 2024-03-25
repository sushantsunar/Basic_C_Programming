//7.	program to find the maximum no in an array
#include <stdio.h>

int main() {
    int arr[] = {6, 2, 55, 54, 43};

    int max = arr[0];

    for (int i = 0; arr[i]; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
      
    }

    printf("The maximum number in the array is: %d\n", max);

    return 0;
}
