#include<stdio.h>
#include<math.h>
int main()
{
    long long int p,q, i,j,n=0,sum,multi,m=1,s,a,x,c,l=0,r=0;
    scanf("%lld",&p);
    scanf("%lld",&q);
    for(i=p;i<=q;i++)
    {
        s=i*i;
        a=s;
        while(a)
        {
            n++;
            a=a/10;
        }
        a=s;
        x=n/2;
        for(j=0,multi=1;j<n-x;j++,multi=multi*10)
        {
            c=a%10;
            l=multi*c+l;
            a=a/10;

        }
        sum=a+l;
        n=0;
        l=0;
        if(i==sum)
        {
            printf("%lld ",i);
            m=0;
        }
    }
    if(m==1)
    printf("INVALID RANGE");
    return 0;
}
