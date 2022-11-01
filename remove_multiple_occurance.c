#include<stdio.h>
#include<string.h>

int main()
{
	// variable declarition
	int len,i,j;
	char ch;
	printf("enter the charactor:");                                 //messg for user
	scanf("%c",&ch);                                                //take input from the user 
	char a[50];    
	printf("enter the string:");                                    //messg for the user
	scanf("%s",a);                                                  // take the string from the user 
	len=strlen(a);                                                  //count the length of the string and stored in len variable
	for(i=0;a[i];i++)
	{
		if(a[i]==ch)                                            //compare the string charactors with user given charactor
		{
			for(j=i;j<len;j++)
			{
				a[j]=a[j+1];                           //if cond true then skip these char and move next address
			}
			len--;                                         // string length is decrement
			i--;
		}
	}
	printf("\nThe final string removing all occurance : %s\n",a);   // print the output remove the multiple occurance
} 
