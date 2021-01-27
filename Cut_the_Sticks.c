#include<stdio.h>
int main()

{
    int n,len,min=0,max=0;
    scanf("%d",&n);
    int arr[1000]={0};
    for(int i=0;i<n;i++)
    {
        scanf("%d",&len);
        if(min>len)
        min=len;
        if(max<len)
        max=len;
        arr[len]++;
    }
    for(int i=min;i<=max;i++)
    {
        if(arr[i])
        {
            printf("%d\n",n);
            n=n-arr[i];
        }
    }
}
