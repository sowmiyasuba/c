#include<stdio.h>
void main()
{
int rem,i;
printf("to print num between 1 to 10");
for(i=0;i<=10;i++)
{
rem=i%2;
if(rem!=0)
{
printf("%d",i);
}
}
}
