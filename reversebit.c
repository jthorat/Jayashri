/* Reverse bits in a given integer*/

#include<stdio.h>
int main()
{
    //variable declarition
    int n,i,j,t1,t2;
    printf("enter the n value\n");      //messg for user
    scanf("%d",&n);                     //take input from the user 
    printf("before reverse\n");         //messg for the user
    for(i=0;i<=31;i++)        
    printf("%d",n>>i&1);                // bits of an intiger numbers
    for(i=31,j=0;i>j;i--,j++)
    {
        t1=n>>i&1;                      //logic of the bit in the form of 31 to 0
        t2=n>>j&1;                      // bit reverse stored in t2 variable
        if(t1!=t2)
        {
            n=n^(1<<i);                 // logic of the compliment
            n=n^(1<<j);
        }
    }
    printf("\nafter reverse bit\n");     //messg for the user
    for(i=0;i<=31;i++)      
    printf("%d",n>>i&1);                 // print the output of the reverse bits in given intiger
}

