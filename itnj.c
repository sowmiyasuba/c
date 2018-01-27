#include<stdio.h>
void main()
{int n,k,a[50],sum=0,i;
printf("Enter the limit of array:");
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
printf("Enter the no. want to add:");
scanf("%d",&k);
for(i=0;i<k;i++)
{sum=sum+a[i];}
printf("Sum is %d",sum);
}
