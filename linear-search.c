#include <stdio.h>
void display()
{
  // display code goes here
}
int linearSearch(int arr[], int key)
{
  // linear search code goes here
  for(int i=0; i<9; i++){
    if(arr[i] == key){
      printf("%d", i);
    }
    else
    {
      printf("-1");

    }
  }
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program
  linearSearch(arr, 12);

  return 0;
}