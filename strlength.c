/* find length of a given string */

#include<stdio.h>
int main()
{
    //variable declaration
    int i,count=0;
    char a[10];
    printf("enter the string\n");
    scanf("%s",a);                        //messg for user
    for(i=0;a[i];i++)                    
    {
        count++;                         //logic to count string length
    }
    printf("string length :%d\n",count); //print the string length
}
