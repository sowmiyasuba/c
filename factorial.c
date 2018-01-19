#include<stdio.h>
void main()
{
int fact=1,c,n;
printf("enter the num:");
scanf("%d",n);
for(c=1;c<=n;c++)
fact=fact*c;
printf("factorial ias %d=%d",fact,n);
}
