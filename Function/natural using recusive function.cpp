#include <stdio.h>
int natural(int);
int main() {
    	int i,n,x;
 printf("enter a number");
 scanf("%d",&n);
 

x=natural(n);
for(i=1;i<=n;i++){
printf("%d",x);
}
    return 0;
}
int natural(int n) {

if(n==1)
{
	return 1;
}
else
 {
 
 	return n+(natural(n-1));
 }
}


