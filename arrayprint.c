#include<stdio.h>
int main()
{
    int n,a[50],i;
    printf("Enter the array size:");
    scanf("%d",&n);
    printf("input %d elements are:",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the output elements of %d are:\n",n);
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
