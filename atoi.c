#include<stdio.h>
#include<stdlib.h>
int a2i(char*);
int main(int argc,char* argv[])
{
int n;
n=a2i(argv[1]);
printf("n=%d\n",n);
}
int a2i(char* p)
{
int i;
int n=0;
for(i=0;p[i];i++)
{
if(p[i]>='0'&&p[i]<='9')
n=n*10+(p[i]-48);
else
break;
}
return n;
}
