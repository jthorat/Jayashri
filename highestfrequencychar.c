#include<stdio.h>
int main()
{
  int i,count=0;
  char ch;
  printf("enter the charactor\n");
  scanf("%c",&ch);
  char a[10];
  printf("enter the string\n");
  scanf("%s",a);
  for(i=0;a[i];i++)
  {
    if(a[i]==ch)
    count++;
  }
  printf("highest frequency charactor: %d\n",count);
}
