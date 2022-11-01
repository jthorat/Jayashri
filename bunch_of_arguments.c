/* Process bunch of inputs arguments and print them*/
/* command line arguments */
#include<stdio.h>
int main(int argc,char const*argv[])                                       // argc-counts the no of arguments,argv-contain the total no of argument                                
{
    // variable declarition
    int i;
    printf("the value of argc is:%d\n",argc);
    for(i=0;i<argc;i++)
    {
        printf("this argument at index no: %d value of %s\n",i,argv[i]); // print the output
    }
}
