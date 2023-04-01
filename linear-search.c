#include <stdio.h>
void display(int ar, int i)
{
  for(int a=0;a<i;a++){
    printf("%d",ar[a]);
  }
}
int linearSearch()
{
  // linear search code goes here
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  display(arr,9);

  return 0;
}