#include <stdio.h>
void display(int arr[],int n){
  for(int i=0;i<n;i++){
 printf("%d ",arr[i]);
  }
}

int linearSearch()
{
  // linear search code goes here
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program
  display(arr,9);

  return 0;
}