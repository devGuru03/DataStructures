#include <stdio.h>

int main()
{
    int n,i;
    printf("enter the Length:");
    scanf("%d",&n);  
    int arr[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
   
  
    int sum1=0;
    for(i=0;i<n;i++)
    {
        sum1+=arr[i];
    }
    float average;
    average=sum1/n;
    printf("The average is %f",average);
}
