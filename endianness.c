/* Write a function to find endianness*/

#include<stdio.h>
int main()
{
    //variable declarition
    int x=0x01234567;          
    //stored the address of x variable in pointer and typecasted to the int variable
    char *p=(char*)&x;              
    if(*p==0x67)                     
    {
        //little endian architecture you will get 0x67
        printf("little endian\n");   
    }
    else
    {
        // big endian architecture you will get 0x01
        printf("big endian\n");      
    }
   
}
