/* Write sorting algorithm */

#include<stdio.h>
int main()
{
    //variable declaration
    int a[5],i,j,temp,n;
    n=sizeof(a)/sizeof(a[0]);             //size of array is stored in n variable
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);                    //take the input from the user 
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])               //the largest element in array is placed at the highest index of array
            {
                temp=a[j];                //logic of the swapping elements
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("after sorting elements in array are\n");
    for(i=0;i<n;i++)
    printf("%d",a[i]);                      // print the sorting array elements
}

 
