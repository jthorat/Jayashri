/* Write a function to find endianness*/

#include<stdio.h>
int main()
{
    //variable declarition
    int x=0x01234567;          
    char *p=(char*)&x;               //stored the address of x variable in pointer and typecasted to the int variable
    if(*p==0x67)                     
    {
        printf("little endian\n");   //little endian architecture you will get 0x67 
    }
    else
    {
        printf("big endian\n");      // big endian architecture you will get 0x01
    }
}
