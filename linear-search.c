#include <stdio.h>
void display(int arr[],int n)
{
  // display code goes here
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }
}
int linearSearch(int arr[],int a,int n)
{
  // linear search code goes here
  for(int i=0;i<n;i++){
    if(arr[i]==a)
      return i;
  }
  return 0;
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program
  int a;
  printf("Enter element to search:");
  scanf("%d",&a);
  int n=linearSearch(arr,a,(sizeof(arr)/sizeof(arr[0])));
  if(n){
    printf("Element found at index :%d",n);
  }
  else{
    printf("Element not found");
  }
  return 0;
}