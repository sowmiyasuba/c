#include <stdio.h>

int main()
{
    int i,j,a[50][50],b[50][50],c[50][50];
    printf("Enter first matrix elements:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",& a[i][j]);
            
        }
        
    }
        printf("Enter second matrix elements:");
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
                printf("the addition of two matrix is:\n");
        
        for(i=0;i<3;i++)
        {
            printf("\n",i);
            {
            for(j=0;j<3;j++)
            printf("%d\t",c[i][j]);
            
        
            }
        
        }
    

    return 0;
}



