#include<stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char a[10],ch;
    printf("enter the string\n");
    scanf("%s",a);
    printf("before the reverse string:%s\n",a);
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        ch=a[i];
        a[i]=a[l-1-i];
        a[l-1-i]=ch;
     }
     printf("after reverse string :%s\n",a);
}
