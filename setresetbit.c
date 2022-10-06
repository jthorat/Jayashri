#include<stdio.h>
int main()
{
int n,bp,op;
printf("enter the n value\n");
scanf("%d",&n);
printf("enter the bit position\n");
scanf("%d",&bp);
printf("1:set 2:reset\n");
printf("enter the choice\n");
scanf("%d",&op);
if(op==1)
{
n=n|(1<<bp);
printf("set bit n:%d\n",n);
}
else if(op==2)
{
n=n&~(1<<bp);
printf("reset bit n:%d\n",n);
}
else
printf("invalid option\n");
}
