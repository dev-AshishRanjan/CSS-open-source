#include <stdio.h>
void display(int arr[])
{
  // display code goes here
     for(int i=0;i<9;i++)
     {
       printf("%d ",arr[i]);
     }
}
int linearSearch(int arr[])
{
  // linear search code goes here
       int n,i;
        printf("Enter the number want to linear search");
        scanf("%d",&n);
         for( i=0;i<9;i++)
         {
           if(arr[i]==n)
             {
              printf("YES");
              break;
             }
         }
         if(i==9)
          {
            printf("NO");
          }
}
int main()
{
  int arr[] = {5, 3, 7, 9, 10, 12, 7, 2, 4};
  // main program
       display(arr);
       linearSearch(arr);
  return 0;
}