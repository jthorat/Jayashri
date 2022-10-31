/* How much memory is allocated for a given intiger array? */

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,*p;
    printf("enter n value\n");
    scanf("%d",&n);
    p=(int*)malloc(n*sizeof(int));
    printf("allocated memory:%d\n",p);
}
