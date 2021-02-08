#include<stdio.h>
int main()
{
    int n;
    int bread=0,i;
    scanf("%d",&n);
    int B[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&B[i]);
    }

    for(i=0;i<n-1;i++)
    {
        if(B[i]%2==1)
        {
            B[i]++;
            B[i+1]++;
            bread+=2;
        }
    }
    if(B[n-1]%2==1)
    {
        printf("NO");
    }
    else
    {
        printf("%d",bread);
    }
}
