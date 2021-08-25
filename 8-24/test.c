#include<stdio.h>
void print1(int arr[],int sz)
{
  int i = 0;
  for(i=0;i<sz;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void print2(int arr[],int sz)
{
  int i = 0;
  for(i=0;i<sz;i++)
  {
    printf("%d ",arr[i]);
  }
  printf("\n");
}
void Sort(int arr[],int sz)
{
  int i = 0;
  for(i=0;i<sz-1;i++)
  {
    int j = 0;
    for(j=0;j<sz-1-i;j++)
    {
      if(arr[j]>arr[j+1])
      {
        int tmp = arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=tmp;
      }
    }
  }
}
int main()
{
  int arr[]={9,8,7,6,5,4,3,2,1,0};
  int sz = sizeof(arr)/sizeof(arr[0]);
  print1(arr,sz);
  Sort(arr,sz);
  print2(arr,sz);
  return 0;
}
