/* Flip bits of a given intiger*/

#include<stdio.h>
int main()
{
    int n,bp;
    printf("enter the n value\n");
    scanf("%d",&n);
    printf("enter the bit position\n");
    scanf("%d",&bp);
    n=n^1<<bp;
    printf("flip bit n:%d\n",n);
}
