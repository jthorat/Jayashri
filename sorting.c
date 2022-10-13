#include<stdio.h>
int main()
{
  int a[5],i,j,temp,n;
  n=sizeof(a)/sizeof(a[0]);
  printf("enter the elements\n");
  for(i=0;i<n;i++)
  scanf("%d",&a[i]);
  for(i=0;i<n-1;i++)
  {
    for(j=0;j<n-1-i;j++)
    {
      if(a[j]>a[j+1])
      {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }

  printf("after sorting elements in array are\n");
  for(i=0;i<n;i++)
  printf("%d",a[i]);
}

