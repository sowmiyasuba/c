#include<stdio.h>
void main()
{
int num,revnum=0,temp,remainder;
printf("Enter the given no:");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
remainder=temp%10;
revnum=revnum+remainder;
temp/=10;
}
if(revnum==num)
{
printf("%d is a palindrome num",num);
else
printf("%d is not palindrome num",num);
}
