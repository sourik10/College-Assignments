// Online C compiler to run C program online
#include <stdio.h>
#include <stdbool.h>

int addition(int a,int b){
  return a+b;
}
int substraction(int a,int b){
  return a-b;
}
void receive(int* a,int *b){
  int x,y;
  printf("Enter two numbers: ");
  scanf("%d %d",&x,&y);

  *a=x;
  *b=y;
}

void display(int a,int b){
  printf("Addition is %d \n",addition(a,b));
  printf("Substraction is %d",substraction(a,b));
}

int main() {
  int a,b;
  receive(&a,&b);
  display(a,b);

  return 0;
}
