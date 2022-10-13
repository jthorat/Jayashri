#include<stdio.h>
int main()
{
  int n,i,j,t1,t2;
  printf("enter the n value\n");
  scanf("%d",&n);
  printf("before reverse\n");
  for(i=0;i<=31;i++)
  printf("%d",n>>i&1);
  for(i=31,j=0;i>j;i--,j++)
  {
    t1=n>>i&1;
    t2=n>>j&1;
    if(t1!=t2)
    {
      n=n^(1<<i);
      n=n^(1<<j);
    }
  }
  printf("\nafter reverse bit\n");
  for(i=0;i<=31;i++)
  printf("%d",n>>i&1);
}

