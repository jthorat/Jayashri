#include<stdio.h>
void nth_bit_set(int,int);
int main()
{
  int n,bp;
  printf("enter the number\n");
  scanf("%d",&n);
  printf("enter the bit position\n");
  scanf("%d",&bp);
  nth_bit_set(n,bp);
  return 0;
}

void nth_bit_set(int n,int bp)
{
  if(n>>bp&1)
  printf("set\n");
  else
  printf("not set\n");
}
