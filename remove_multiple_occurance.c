#include<stdio.h>
#include<string.h>

int main()
{
	int len,i,j;
	char ch;
	printf("enter the charactor:");
	scanf("%c",&ch);
	char a[50];
	printf("enter the string:");
	scanf("%s",a);
	len=strlen(a);
	for(i=0;a[i];i++)
	{
		if(a[i]==ch)
		{
			for(j=i;j<len;j++)
			{
				a[j]=a[j+1];
			}
			len--;
			i--;
		}
	}
	printf("\nThe final string removing all occurance : %s\n",a);
} 
