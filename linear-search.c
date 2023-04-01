#include <stdio.h>
void display()
{
  // display code goes here
}
int linearSearch(int search,int n,int arr[])
{
  // linear search code goes here
  for (int i = 0; i < n; i++)
  {
    if(search==arr[i])
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
  printf("%d",linearSearch(7,sizeof(arr),arr));
  return 0;
}