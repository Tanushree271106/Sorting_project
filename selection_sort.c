#include<stdio.h>
voidselectionSort(int arr[],int n){
 for(int i=0;i<n-1;i++){
  int minIndex=i;
   for(int j=i+1;j<n;j++){
    if(arr[j]<arr[minIndex]){
      minIndex=j;
    }
   }
  int temp=arr[i];
  arr[i]=arr[minIndex];
  arr[minIndex]=temp;
 }
}
void main(){
  int arr[]={5,3,8,4,2};
  int n=5;
  selectionSort(arr,n);
  printf("Sorted array:");
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }
}
