/* LCM,GCD of 'n' numbers*/

#include<stdio.h>
int main()
{
    //variable declarition
    int n1,n2,x,y,gcd,lcm;       
    printf("enter the n1 n2 nos\n");   //messg for the user
    scanf("%d%d",&n1,&n2);             // take input from the user 
    x=n1;
    y=n2;
    while(n1!=n2)                      //logic of finding GCD  
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
    printf("GCD:%d\n",n1);            // print the GCD number
    gcd=n1;
    lcm=(x*y)/gcd;                    //logic of the finding LCM number
    printf("LCM:%d\n",lcm);           // print the LCM number
}
