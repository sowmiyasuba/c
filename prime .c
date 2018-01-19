#include<stdio.h>
void main()
{
int n,i,flag=0;
printf("Enter an integer:");
scanf("%d",&n);
for(i=2;i<=n/2;i++)
{
if(n%i==0)
{
flag=1;
break;
}}
if(flag==0)
{
printf("the num is prime",num);
}
else
{
printf("the num is not prime",num);
}
}


