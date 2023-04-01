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
  for(int i=0; i<9; i++)
  {
    if(arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program
  int key;
  scanf("%d", &key);
  int search = linearSearch(arr, key);
  printf("%d\n", search);
  display(arr);


  return 0;
}