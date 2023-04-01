#include <stdio.h>
void display(int* arr,int n)
{
  for (int i = 0; i < n; i++)
  {
    printf("%d ",arr[i]);
  }
  
}
int linearSearch(int* arr,int target,int size)
{
  int ans=-1;
  for (int  i = 0; i < size; i++)
  {
    if (arr[i]==target)
    {
      ans=i;
      return i;
    }
    
  }
  return ans;
  
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  display(arr,9);
  int idx=linearSearch(arr,10,9);

  return 0;
}