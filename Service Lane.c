#include<stdio.h>
int main()
{
    int n,t,i,j,start,end,k;
    scanf("%d%d",&n,&t);
    int arr[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&start,&end);

        int min=arr[start];
        for(k=start;k<=end;k++)
        {

            if(arr[k]<min)
            {
                min=arr[k];
            }

        }
        printf("%d\n",min);
    }
}
