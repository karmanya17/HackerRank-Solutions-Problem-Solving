#include<stdio.h>
int main()
{
    int n,maxcount=0,mincount=0;
    scanf("%d",&n);
    int score[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&score[i]);
    }
    int max=score[0],min=score[0];
    for(int i=1;i<n;i++)
    {
        if(score[i]>max)
        {
        max=score[i];
        maxcount++;
        }
        if(score[i]<min)
        {
            min=score[i];
            mincount++;
        }

    }
    printf("%d %d",maxcount,mincount);
}
