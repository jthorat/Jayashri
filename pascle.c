/* Print pascal triangle */

#include<stdio.h>
int main()
{
    // variable declarition
    int row,col,space,n,no;
    printf("enter the no of rows\n");            // messg for the user
    scanf("%d",&no);                             // take the input from the user
    for(row=0;row<no;row++)                      // the for loop upto given no of rows 
    {
        for(space=0;space<(no-row);space++)      //the for loop use for the spaces    
        {
            printf(" ");                         // print the spaces in pascal triangle
        }
      
        n=1;
      
        for(col=0;col<=row;col++)
        {
            printf(" %d",n);
            n=n*(row-col)/(col+1);               // equation of the finding pascle triangles numbers
        }
        printf("\n");
    }
}
