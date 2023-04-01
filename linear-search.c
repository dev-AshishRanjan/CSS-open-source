#include <stdio.h>
void display(int arr[],int n){
  for(int i=0;i<n;i++){
 printf("%d ",arr[i]);
  }
}

int linearSearch(int arr[],int n,int target)
  

{
  // linear search code goes here
  int flag=1;
  for (int i=0;i<n;i++){
    if(target==arr[i]){
      printf("element found ");
      flag=0;
    }
  }
if(flag){
  printf("element not found");
}
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program
  display(arr,9);
  int target=5;
  linearSearch(arr,9,target);

  return 0;
}