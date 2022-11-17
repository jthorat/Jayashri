/* Process bunch of inputs arguments and print them*/

#include<stdio.h>

// command line arguments 
// argc-counts the no of arguments,argv-contain the total no of argument
int main(int argc,char const*argv[])                                                                      
{
    // variable declarition
    int i;
    printf("the value of argc is:%d\n",argc);
    for(i=0;i<argc;i++)
    {
        // print the output
        printf("this argument at index no: %d value of %s\n",i,argv[i]); 
    }
    
}
