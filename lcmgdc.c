/* LCM,GCD of 'n' numbers*/

#include<stdio.h>
int main()
{
    int n1,n2,x,y,gcd,lcm;
    printf("enter the n1 n2 nos\n");
    scanf("%d%d",&n1,&n2);
    x=n1;
    y=n2;
    while(n1!=n2)
    {
        if(n1>n2)
        {
            n1=n1-n2;
        }
        else
        {
            n2=n2-n1;
        }
    }
    printf("GCD:%d\n",n1);
    gcd=n1;
    lcm=(x*y)/gcd;
    printf("LCM:%d\n",lcm);
}
