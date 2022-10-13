#include<stdio.h>
int main(int argc,char const*argv[])
{
int i;
printf("the value of argc is:%d\n",argc);
for(i=0;i<argc;i++)
{
printf("this argument at index no: %d value of %s\n",i,argv[i]);
}
}
