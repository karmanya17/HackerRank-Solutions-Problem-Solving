#include<stdio.h>
int main()
{
    int n,index;
    scanf("%d",&n);
    int a[n+1],k;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&k);
        a[k]=i;
    }

    for(int i=1;i<=n;i++)
    {
        printf("%d\n",a[a[i]]);
    }
    return 0;
}
