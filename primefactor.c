/* print prime factors of a given number */

#include<stdio.h>
int main()
{
    int n,i=2;
    printf("enter the number\n");
    scanf("%d",&n);
    while(n>1)
    {
        while(n%i==0)
        {
            printf("%d\n",i);
            n=n/i;
        }
        i++;
    }
}

