#include<stdio.h>
void main()
{
int n,i,temp=0;
printf("Enter an integer:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
temp++;

}}
if(temp==2)
{
printf("the num is prime",n);
}
else
{
printf("the num is not prime",n);
}
}


