#include <stdio.h>
void display(int flag)
{
  if (flag)
  {
    printf("Item exists in array.\n");
  }
  else
  {
    printf("Item does not exist in array.\n");
  }
}
int linearSearch(int arr[], int n, int length)
{
  // linear search code goes here
  int flag = 1;
  for(int i = 0; i < length; i++)
  {
    if(arr[i] == n)
    {
        display(1);flag = 0; break;
    }
  }

  if(flag)
    display(0);
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program

  int n; 
  printf("Enter value to search: ");
  scanf("%d", &n);
  linearSearch(arr,n, sizeof(arr)/sizeof(arr[0]));
  return 0;
}