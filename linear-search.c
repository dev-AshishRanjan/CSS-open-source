#include <stdio.h>
void display(int i)
{ 
  int index=i;
  printf("%d",index);
}

int linearSearch(int arr[],int key,int n)
{
  for(int i=0;i<n;i++){
    if(arr[i]==key){
      display(i);
    }else
      display(-1);
  }
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
{ int key;
printf("Enter your key:");
scanf("%d",&key);
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program

  linearSearch(arr[],key,9);
  return 0;
}