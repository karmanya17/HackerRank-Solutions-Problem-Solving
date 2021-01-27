#include<stdio.h>
int main()
{
    int n,m,i,k,j,p=0,r=0,q=0;
    scanf("%d%d",&n,&m);
    char arr[n][m];
    for(i=0;i<n;i++)
    scanf("%s",arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            p=0;
            for(k=0;k<m;k++)
            {
                if(arr[i][k]=='1'||arr[j][k]=='1')
                p++;
            }
            if(q==p)
            r++;
            else if(q<p)
            {
                q=p;
                r=1;
            }
        }
    }
    printf("%d\n%d",q,r);
}
