#include <stdio.h>
#include<conio.h>

int main() {
    int num1, num2, max, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // determine the maximum number between num1 and num2
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }

    // find the LCM by checking multiples of the max number
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}
