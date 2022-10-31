/* Write a function to return whether n-th bit from right to left is set in an integer. */

#include<stdio.h>
void nth_bit_set(int,int);                //function declarition
int main()
{
    //variable declarition
    int n,bp;
    printf("enter the number\n");        //messg for the user
    scanf("%d",&n);                      //take the input from the user
    printf("enter the bit position\n");  //messg for the user
    scanf("%d",&bp);                     //take the bit position input from the user
    nth_bit_set(n,bp);                   //function calling and passing n and bp as the actual parameters
    return 0;
}

void nth_bit_set(int n,int bp)          // function defination
{
    if(n>>bp&1)                         //logic of the set bit
        printf("set\n");
    else
        printf("not set\n");
}
