//4. Write a system programming your own version of head & tail command?

#include<stdio.h>
#include<sys/stat.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>


// main function
int main(int argc,char *argv[])
{
	//variable declarition
	int fd,i=0,j=0,n,choice;
	char ch,**p=NULL,*buff=NULL;
	//file open in read mode only
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror("Error:");
		return -1;
	}



	while((read(fd,&ch,1))>0)
	{
		//dynamically allocate the memory to buff
		buff=realloc(buff,i+1);
		buff[i++]=ch;
		if(ch=='\n')
		{
			buff=realloc(buff,i+1);
			buff[i++]='\0';
			p=realloc(p,(j+1)*sizeof(p));
			p[j++]=buff;
			//free(buff);
			buff=NULL;
			i=0;
		}
	}
	printf("j=%d\n",j);
	printf("enter the choice\n");
	printf("1.head\n2.tail\n3.exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		//implement the logic for head command
		case 1:if(j>=10)
		       {
			       for(int k=0;k<10;k++)
				       printf("%s",p[k]);
		       }
		       else if(j>=1 && j<=10)
		       {
			       for(int k=0;k<j;k++)
				       printf("%s",p[k]);
		       }
		       else
			       printf("file is empty\n");
		       break;

		//implement the logic for tail command
		case 2:if(j>=1 && j<=10)
		       {
			       for(int k=0;k<j;k++)
				       printf("%s",p[k]);
		       }
		       else if(j>10)
		       {
			       n=j-10;
			       for(int k=n;k<j;k++)
				       printf("%s",p[k]);
		       }
		       else
			       printf("file is empty\n");
		       break;
		case 3:return 0;
		default:printf("invalid choice\n");
	}




}

