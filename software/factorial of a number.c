#include <stdio.h>
int main(){
	int n,f=1,i;
	printf("Enter a number :");
	scanf("%d", &n);
	for(int i = 1; i <= n; f = f * i++ ){}
	(n<0)? printf("Invalid Input") : printf("Factorial is %d", f);
	return 0;
}
