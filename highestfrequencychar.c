/* Highest frequency of a charactor in a given string */

#include<stdio.h>
int main()
{
    //variable declaration
    int i,count=0;
    char ch;
    // messg for the user
    printf("enter the charactor\n");                   
    //  take the input from the user
    scanf("%c",&ch);                                   
    char a[10];
    // messg for the user
    printf("enter the string\n");                       
    // take the input from the user
    scanf("%s",a); 
    // logic of the compare the user given char in the string
    for(i=0;a[i];i++)
    {
        if(a[i]==ch)                                   
        //count user given char how many times and stored in count variable
        count++;                                       
    }
    // print the output
    printf("highest frequency charactor: %d\n",count); 
}
