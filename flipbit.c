/* Flip bits of a given intiger*/

#include<stdio.h>
int main()
{
    //variable declarition
    int n,bp;
    // messg for the user
    printf("enter the n value\n");     
    //take input from the user
    scanf("%d",&n);                     
    //messg for the user
    printf("enter the bit position\n");
    // take input from the user
    scanf("%d",&bp);                    
    // logic of the flip bit 
    n=n^1<<bp;
    // print the output
    printf("flip bit n:%d\n",n);        
}
