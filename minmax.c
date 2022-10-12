#include<stdio.h>
int main()
{
  int a[5]={2,6,7,9,5};
  int n,max,min,i;
  n=sizeof(a)/sizeof(a[0]);
  max=a[0];
  min=a[0];
  for(i=0;i<n;i++)
  {
    if(a[i]<min)
    min=a[i];
    
    if(a[i]>max)
    max=a[i];
  }
  printf("largest element in the array:%d\n",max);
  printf("smallest element in the array:%d\n",min);
}

