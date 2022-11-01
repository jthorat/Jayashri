/* Highest frequency of a charactor in a given string */

#include<stdio.h>
int main()
{
    //variable declaration
    int i,count=0;
    char ch;
    printf("enter the charactor\n");                   // messg for the user
    scanf("%c",&ch);                                   //  take the input from the user
    char a[10];
    printf("enter the string\n");                      // messg for the user 
    scanf("%s",a);                                     // take the input from the user
    for(i=0;a[i];i++)
    {
        if(a[i]==ch)                                   // compare the user given char in the string
        count++;                                       //count user given char how many times and stored in count variable
    }
    printf("highest frequency charactor: %d\n",count); // print the output
}
