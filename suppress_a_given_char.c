/* Write a function to suppress a given charactor in the provided string */

#include<stdio.h>
#include<string.h>
void suppress_a_given_charactor(char*,char);     //function declaration

int main()
{
   //variable declaration
    char ch;
    printf("enter the charactor\n");
    scanf("%c",&ch);                            //take input from user
    char s[50];
    printf("enter the string\n");
    scanf("%s",s);                              //take string input form user
    suppress_a_given_charactor(s,ch);           //calling function and passing s and ch as actual parameters
    printf("the final string '%c'=%s\n",ch,s);
    return 0;
}


void suppress_a_given_charactor(char* s,char ch)//func defination with s and ch as FP
{
    //varible dec
    int l,i,j;
    l=strlen(s);                                //calling fun string len and storing result into l
    for(i=0;i<l;i++)
    {
        if(s[i]==ch)                            //if current string char is compared with given char if matched true
        {
            for(j=i;j<l;j++)                    
            {                                   //logic to delete char from string
                s[j]=s[j+1];
            }
            l--;                                //dec len and loop counter
            i--;
        }
    }
}

