/* print prime factors of a given number */

#include<stdio.h>
int main()
{
    // variable declarition
    int n,i=2;
    printf("enter the number\n");  //messg for user
    scanf("%d",&n);                // take input from the user   
    while(n>1)
    {
        while(n%i==0)             // logic of the finding prime factorof given number
        {
            printf("%d\n",i);     // print the output   
            n=n/i;
        }
        i++;
    }
}

