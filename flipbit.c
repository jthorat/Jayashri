/* Flip bits of a given intiger*/

#include<stdio.h>
int main()
{
    //variable declarition
    int n,bp;
    printf("enter the n value\n");      // messg for the user
    scanf("%d",&n);                     //take input from the user
    printf("enter the bit position\n"); //messg for the user
    scanf("%d",&bp);                    // take input from the user
    n=n^1<<bp;                          // logic of the flip bit  
    printf("flip bit n:%d\n",n);        // print the output
}
