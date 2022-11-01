/* How much memory is allocated for a given intiger array? */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    //variable declarition
    int n,*p;
    printf("enter n value\n");         //messg for the user
    scanf("%d",&n);                    //take inputfrom the user
    p=(int*)malloc(n*sizeof(int));     // logic of dynamic memory allocation
    printf("allocated memory:%d\n",p); // print the memory allocation  
}
