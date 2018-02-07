#include <stdio.h>

int main()
{
    int a[50],n,i,sum;
    float avg;
    printf("enter the size:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    sum=avg=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
        
        avg=sum/n;
    }
    printf("the avg of n num is:%.2f",avg);
    
  return 0;
}



