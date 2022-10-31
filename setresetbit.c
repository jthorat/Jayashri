/* Set/reset bits of a given integer */

#include<stdio.h>
int main()
{
    //variable declarition
    int n,bp,op;
    printf("enter the n value\n");              //messg for the user
    scanf("%d",&n);                             //take the input no from the user
    printf("enter the bit position\n");         //messg for the user 
    scanf("%d",&bp);                            // take the bit position input from the user 
    printf("1:set 2:reset\n");
    printf("enter the choice\n");
    scanf("%d",&op);                             //select the option from the user
    if(op==1)                                    //compare the option                                  
    {
        n=n|(1<<bp);                             //logic of the set bit 
        printf("set bit n:%d\n",n);
    }
    else if(op==2)                              //compare the option
    {
        n=n&~(1<<bp);                           //logic of the clear bit
        printf("reset bit n:%d\n",n);
    }
    else
    printf("invalid option\n");                 //default  option
}
