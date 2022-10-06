#include<stdio.h>
void nthbitset(int,int);
int main()
{
int n,bp;
printf("enter the number\n");
scanf("%d",&n);
printf("enter the bit position\n");
scanf("%d",&bp);
nthbitset(n,bp);
return 0;
}
void nthbitset(int n,int bp)
{
if(n>>bp&1)
printf("set\n");
else
printf("not set\n");
}
