#include <stdio.h>
#include <stdbool.h>

int sumElements(int ar[],int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=ar[i];
    }
    return s;
}
int diff(int ar[],int n){
    int max=ar[0],min=ar[0];
    for(int i=1;i<n;i++){
        if(ar[i]>max){
            max=ar[i];
        }
        if(ar[i]<min){
            min=ar[i];
        }
    }
    return max-min;
}
int main() {
  int n;
  printf("Enter no of elements: ");
  scanf("%d",&n);

  int a[n];
  printf("Enter elements");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }
  printf("Sum of elements: %d \n",sumElements(a,n));
  printf("Differenece b/w max and min: %d",diff(a,n));  return 0;
}
