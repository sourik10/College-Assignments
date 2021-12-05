#include <stdio.h>

int findSum(int n){
    return n*(n+1)/2;
}

int main() {
   int m;
   printf("Enter a number \n");
   scanf("%d",&m);
   (m<0)?printf("Invalid"):printf("%d",findSum(m));
   
   
    return 0;
}
