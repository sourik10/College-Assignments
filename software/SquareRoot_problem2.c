
#include <stdio.h>
#include <stdbool.h>
#include<math.h>

double findSqrt(int n){
    return sqrt(n);
}

int main() {
    int n;
    printf("Enter a positive number: ");
    scanf("%d",&n);
    
    if(n<0){
        printf("Invalid Input");
    }
    else{
        double x=findSqrt(n);
        printf("Square root is %f",x);
    }
    
    return 0;
}
