#include <stdio.h>
#include<conio.h>
void natural(int n) {
	int a;
 printf("enter a number");
 scanf("%d",&a);
 if(n<=a){
 	printf("%d",n);
 	natural(n+1);
 }
}

int main() {
    int n=1;

natural(n);
    return 0;
}

