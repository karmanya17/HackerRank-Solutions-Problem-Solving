#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{
    int arr_count,d,i,j,k,c=0;
    scanf("%d%d",&arr_count,&d);
    int arr[arr_count];
    for(i=0;i<arr_count;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<arr_count;i++)
    {
        for(j=i+1;j<arr_count;j++)
        {
            if(arr[j]-arr[i]==d)
            {
                for(k=j+1;k<arr_count;k++)
                {
                    if(arr[k]-arr[j]==d)
                    {
                        c++;
                        break;
                    }
                }
            }


        }
    }
    printf("%d",c);
}
