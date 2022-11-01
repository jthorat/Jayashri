/* Write a function to convert string to integer,equivalent of atoi().*/

#include<stdio.h>             
#include<stdlib.h>
int a2i(char*);                                      //function declarition
int main(int argc,char* argv[])                      // command line argument
{
    // variable declarition
    int n;
    n=a2i(argv[1]);                                  //atoi function calling 
    printf("n=%d\n",n);                              // print the output
}
 

int a2i(char* p)                                     //function defination
{
    //variable declarition
    int i;
    int n=0;
    for(i=0;p[i];i++)
    {
        if(p[i]>='0'&&p[i]<='9')
        n=n*10+(p[i]-48);                          // logic of the atoi  
        else  
        break;
    }
    return n;                                     // return to the n variable 
}
