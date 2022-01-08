#include<stdio.h>

int main() {
   int m;
   printf("Enter a number ");
   scanf("%d",&m);
   (m<0)?printf("Invalid"):printf("%d",m*(m+1)/2);
   
    return 0;
}
