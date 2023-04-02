#include <stdio.h>
void display(int arr[])
{
  // display code goes here
    printf("the array is: ");
  for(int i=0; i<9; i++)
  {
    printf(" %d  ", arr[i]);
  }

}
int linearSearch(int arr[], int key)
{
  // linear search code goes here
 
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program
 
  display(arr);


  return 0;
}