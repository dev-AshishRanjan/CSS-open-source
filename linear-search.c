#include <stdio.h>
void display(int arr[],int n)
{
  // display code goes here
  for(int i=0;i<n;i++){
    printf("%d",arr[i]);
  }

}
int linearSearch(int arr[],int key,int n)
{
  // linear search code goes here
  int i;
  for(i=0;i<n;i++){
    if(arr[i]==key){
       printf("found");
    }
    return key;
  }
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program

  return 0;
}