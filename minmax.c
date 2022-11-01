/* Find max/min in given array */

#include<stdio.h>
int main()
{
    // variable declarition
    int a[5]={2,6,7,9,5};
    int n,max,min,i;
    n=sizeof(a)/sizeof(a[0]);
    max=a[0];                                         // array index[0]th value is stored in max variable
    min=a[0];                                         // array index[0]th value is stored in min variable  
    for(i=0;i<n;i++)
    {
        if(a[i]<min)                                  // logic of the finding min number 
        min=a[i];
    
        if(a[i]>max)                                 //logic of the finding max number
        max=a[i];
    }
    printf("largest element in the array:%d\n",max); //print the max number 
    printf("smallest element in the array:%d\n",min);//print the min number
}

