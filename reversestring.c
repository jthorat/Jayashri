/* Reverse a string */

#include<stdio.h>
#include<string.h>
int main()
{
    //variable declarition
    int i,l;
    char a[10],ch;
    printf("enter the string\n");                // messg for the user
    scanf("%s",a);                               //take the input string from user
    printf("before the reverse string:%s\n",a);  // messg for the user   
    l=strlen(a);                                 // count the length of the string and stored in l variable
    for(i=0;i<l/2;i++)
    {
        ch=a[i];                                // logic of the swapping elements and reverse the string
        a[i]=a[l-1-i];
        a[l-1-i]=ch;
     }
     printf("after reverse string :%s\n",a);    // print the reverse string
}
