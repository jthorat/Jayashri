#include<stdio.h>
#include<string.h>
void suppress_a_given_charactor(char*,char);
int main()
{
char ch;
printf("enter the charactor\n");
scanf("%c",&ch);
char s[50];
printf("enter the string\n");
scanf("%s",s);
suppress_a_given_charactor(s,ch);
printf("the final string '%c'=%s\n",ch,s);
return 0;
}
void suppress_a_given_charactor(char* s,char ch)
{
int l,i,j;
l=strlen(s);
for(i=0;i<l;i++)
{
if(s[i]==ch)
{
for(j=i;j<l;j++)
{
s[j]=s[j+1];
}
l--;
i--;
}
}
}

