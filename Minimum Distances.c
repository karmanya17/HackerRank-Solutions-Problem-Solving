#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



// Complete the minimumDistances function below.
int main()
{
    int n,min=0,i,j,diff,f=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                diff=j-i;

            if(f==0)
            {
                min=diff;
                f=1;
            }
            if(diff<min)
            min=diff;
            }

        }


    }
    if(min==0)
    printf("-1");
    else {
    printf("%d",min);
    }


}
