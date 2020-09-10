#include<stdio.h>
int main()
{
    int T,n,i,j,sum,k;
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        int a[n][n];
        int b[n][n];
        int c[n][n];
        int d[50][50]={0};
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
             
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
         
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                for(k=0;k<n;k++)
                    d[i][j]+=a[i][k]*b[k][j];
            }
             
             
        }
         
         
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==n-1)
                    printf("%d",c[i][j]);
                else
                    printf("%d ",c[i][j]);
            }
            printf("\n");
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(j==n-1)
                    printf("%d",d[i][j]);
                else
                    printf("%d ",d[i][j]);
            }
            printf("\n");
        }
     
         
    }
    return 0;
 } 
