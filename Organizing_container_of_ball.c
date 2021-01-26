#include<stdio.h>
int main()
{
    int n,q,i,j,k,p=0;
    scanf("%d",&q);



    for(k=0;k<q;k++)
    {
        scanf("%d",&n);
        int arr[n][n],space[n],ball[n];
        for(i=0;i<n;i++)
        {
            space[i]=0;
            ball[i]=0;
        }

        for(i=0;i<n;i++)
        {
             for(j=0;j<n;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                space[i]=space[i]+arr[i][j];
                ball[i]=ball[i]+arr[j][i];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(space[i]==ball[j])
                {
                    ball[j]=NULL;
                    space[i]=NULL;
                    p=1;break;
                }
                else
                p=-1;
            }
            if(p==-1)
            {
                break;
            }
        }
        if(p==-1)
        {
            printf("Impossible\n");
        }
        else
        {
            printf("Possible\n");
        }
    }

  return 0;
}
