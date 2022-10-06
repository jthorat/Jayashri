#include<stdio.h>
int main()
{
int x=0x01234567;
char *p=(char*)&x;
if(*p==0x67)
{
printf("little endian\n");
}
else
{
printf("big endian\n");
}
}
