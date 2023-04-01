#include <stdio.h>
void display()
{
  // display code goes here
}
int linearSearch(int A[],int n)
{
  // linear search code goes here
  for(int i=0;i<9;i++){
    if(n==A[i])
    printf("ooh yess!!");


  }

}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program
  int x;
  scanf("%d",&x);
  linearSearch(arr,x);

  return 0;
}