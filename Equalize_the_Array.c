#include<stdio.h>
int main()
{
    int count;
     int i,max=0,ar[100]={0},n=0;
    scanf("%d",&count);
    int arr[count];
    for(i=0;i<count;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<count;i++)
    {
        ar[arr[i]]++;
    }
    for(i=0;i<100;i++)
    {
        if(ar[i]>max)
        max=ar[i];
    }

    printf("%d",count-max);


}
