#include<stdio.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int arr[n];
    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    int i,problem,problemno,pageno=1,special=0;
    for(i=0;i<n;i++)
    {
        problem=arr[i];
        for(problemno=1;problemno<=problem;problemno++)
        {

            if(problemno==pageno)
            {
                special++;
            }
            if(problemno%k==0||problemno==problem)
            pageno++;

        }
    }
    printf("%d",special);

}
