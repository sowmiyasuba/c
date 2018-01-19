#include<stdio.h>
void main()
{
int i,j,r;
printf("the prime num b/w 1 nd 10:");
for(i=2;i<=10:i++)
{
r=0;
for(j=2;j<=i;j++)
{
if((i%j)==0)
{
r++;
break;
}
if(r==0)
printf("%d",i);
}
}
}
