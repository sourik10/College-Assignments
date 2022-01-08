#include <stdio.h>
#include <stdbool.h>

int sum(int p,int q){
    return p+q;
}
int multiply(int p,int q){
    return p*q;
}
int divide(int p,int q){
    return p/q;
}
int expr(int p,int q){
    return (p*p-q*q*q);
}
bool oddEven(int x){
    if(x%2==0){
        return 1;
    }return 0;
}

int fact(int n){
    int f=1;
	
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}


int main() {
    int a,b; //take input
    printf("enter two numbers \n");
    scanf("%d %d",&a,&b);
    printf("Addition = %d \n",sum(a,b));
    printf("Multiply = %d \n",multiply(a,b));
    printf("Division = %d \n",divide(a,b));
    printf("Expresssion = %d \n",expr(a,b));
    
	printf("Factorial = %d \n",fact(b));
    if(oddEven(b)){
        printf("Even number");
    }
    else printf("Odd number");
    
}
