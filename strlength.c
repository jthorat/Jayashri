#include<stdio.h>
int main()
{
  int i,count=0;
  char a[10];
  printf("enter the string\n");
  scanf("%s",a);
  for(i=0;a[i];i++)
  {
    count++;
  }
  printf("string length :%d\n",count);
}
