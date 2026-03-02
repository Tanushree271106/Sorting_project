#include<stdio.h>
int bubbleSort(int arr[],int n){
  for(int i=0;i<n-1;i++){
    int swapped=0;
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
        swapped=1;
      }
    }
  }
  return swapped;
}
int main(){
  int arr[]={5,3,8,4,2};
  int n=5;
  int swapped=bubbleSort(arr,n);
  if(swapped==0){
    printf("Array is already sorted\n");
    break;
  }
  printf("Sorted array:");
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }
  return 0;
}
