//Write a C code which has following CFG.
//problem 4
#include <stdio.h>
int main() {
	int i;
	scanf("%d",&i);
	if(i<5){
		printf("Hello");
	}
	else{
		while(i!=0){
			i--;
		}
	}
	printf("World");
	return 0;
}
