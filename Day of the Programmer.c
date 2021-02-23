#include<stdio.h>
int main()
{
    int year,feb,mon7=215;
    scanf("%d",&year);
    if(year<1918)
       feb=year%4 ? 28:29;
    else if(year>1918)
    {
        if((year%400==0) || (!(year%100==0) && (year%4==0)))
        feb=29;
        else
        feb=28;

    }
    else
    feb=15;
    feb=256 -(feb+mon7);

    printf("%d.09.%d",feb,year);

}
