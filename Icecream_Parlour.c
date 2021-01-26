#include<stdio.h>
int main()
{
    int i,j,q,k,n,m;
    scanf("%d",&q);
    for(k=0;k<q;k++)
    {   int index[2];
        scanf("%d%d",&m,&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(a[i]+a[j]==m)
                {
                    index[0]=i+1;
                    index[1]=j+1;
                }
            }


    }
    for(i=0;i<2;i++)
    {
        printf("%d ",index[i]);
    }
    printf("\n");

    }
}
