/* Write a function to convert string to integer,equivalent of atoi().*/
/* Write a function to convertstring to integer ,equivalent of atoi().*/

#include<stdio.h>             
#include<stdlib.h>

//function declarition
int a2i(char*); 
// command line argument
int main(int argc,char* argv[])                     
{
    // variable declarition
    int n;
    //atoi function calling 
    n=a2i(argv[1]);                                
    printf("n=%d\n",n);               
}
 

//function defination
int a2i(char* p)  
{
    //variable declarition
    int i;
    int n=0;
    // logic of the atoi 
    for(i=0;p[i];i++)
    {
        if(p[i]>='0'&&p[i]<='9')
        n=n*10+(p[i]-48);                           
        else  
        break;
    }
    // return to the n variable
    return n;                                     
}
