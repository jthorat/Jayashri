/* Write a program to merge two arrays */

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *twostrcat(char* s1,char* s2);
int main()
{
    char s1[50],s2[50];
    int i,n;
    printf("enter the string 1\n");
    scanf("%s",s1);
    printf("enter the string 2\n");
    scanf("%s",s2);
    printf("string the s1=%s\n",strcat(s1,s2));
}

char *twostrcat(char* s1,char* s2)
{
    int i,j;
    for(i=0;s1[i];i++)
    for(j=0;s2[i];j++,i++)
    {
        s1[i]=s2[i];
    }
    s1[i]='\0';
    return s1;
}
