#include <stdio.h>
void fact(int n){
    if(n==0){
        printf("0! = 1");
    }
    else{
    unsigned int f=1;
    for(int i=2;i<=n;i++){
        f=f*i;
    }
    printf("%d",f);
    }
    
}

int main() {
   int m;
   printf("Enter a number \n");
   scanf("%d",&m);
   (m<0)?printf("Invalid"):fact(m);
   
   
    return 0;
}
