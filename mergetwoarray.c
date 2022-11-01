/* Write a program to merge two arrays */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *twostrcat(char* s1,char* s2);              // function declaration
int main()
{
    // variable declarition
    char s1[50],s2[50];
    int i,n;
    printf("enter the string 1\n");            // messg for the user
    scanf("%s",s1);                            // take input string1 from the user
    printf("enter the string 2\n");            // messg for the user
    scanf("%s",s2);                            // take the input string2 from the uer 
    printf("string the s1=%s\n",strcat(s1,s2));// function calling to the merge two array and print the output
}

char *twostrcat(char* s1,char* s2)             // function defination
{
    //variable declarition
    int i,j;
    for(i=0;s1[i];i++)
    for(j=0;s2[i];j++,i++)
    {
        s1[i]=s2[i];                           //copying string2 elements in string1
    }
    s1[i]='\0';                                // add null charactor to the end of the string
    return s1;                                 // return the output string1 
}
