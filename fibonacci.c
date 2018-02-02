#include <stdio.h>

int main()
{
int n,t1=0,t2=1,nextterm,i;
printf("Enter the no of terms:");
scanf("%d",&n);
//printf("The fibonacci series is:\n");
for(i=0;i<=n;++i)
{
    if(i<=1)
    {
        nextterm=i;
    }
    
else
{
    
    nextterm=t1+t2;
    t1=t2;
    t2=nextterm;

}
printf("%d\n",nextterm);
}



    return 0;
}
