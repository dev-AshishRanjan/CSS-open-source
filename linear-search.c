#include <stdio.h>
void display(int flag)
{
}
// pass array name, target value, length of array
int linearSearch(int arr[], int n, int length)
{
  // linear search code goes here
  for(int i = 0; i < length; i++)
  {
    if(arr[i] == n)
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
  return 0;
}