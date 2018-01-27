#include<stdio.h>
int main()

{

    int a[50];
    int n,i,large,s_large;
    
     
    printf("\n Enter number of elements: ");
    scanf("%d",&n);
     
    printf("\n Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     
    large=s_large=a[0];
    for(i=0;i<n;i++)
    if(large<a[i])
    {
        s_large=large;
        large=a[i];
    }
    else if(s_large<a[i]&&a[i]!=large)
    {
        s_large=a[i];
        
    }
    
    printf("\n The sec gratest no in array is %d",s_large);
    return 0;
    }
