/* Write a program to do matrix transpose */

#include<stdio.h>
int main()
{
    //variable declaration
    int a[2][3],i,j;
    printf("enter the elements of matrix\n");   //mssge for the user
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf(" %d",&a[i][j]);              //reading matrix input from the u=the user
        }
     }
  
      printf("matrix is :\n");                  //mssge for user
      for(i=0;i<2;i++)
      {
          for(j=0;j<3;j++)
          {
              printf("%d",a[i][j]);             //logic to print matrix
          }
          printf("\n");
      }

      printf("transpose of matrix :\n");       //mssge for user
      for(i=0;i<3;i++)
      {
          for(j=0;j<2;j++)
          {
              printf(" %d",a[j][i]);           //logic to transpose as well as print matrix
          }
          printf("\n");
      }
}
