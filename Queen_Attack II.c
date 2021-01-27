#include<stdio.h>
int main()
{
    int i,n,rq,cq,ro,co,k,up,down,right,left,upleft,upright,downleft,downright;

    scanf("%d%d",&n,&k);
    scanf("%d%d",&rq,&cq);

    left=cq-1;
    right=n-cq;
    up=n-rq;
    down=rq-1;
    if(left<up)
    upleft=left;
    else
    upleft=up;

    if(left<down)
    downleft=left;
    else
    downleft=down;

    if(right<down)
    downright=right;
    else
    downright=down;

    if(right<up)
    upright=right;
    else
    upright=up;

    for(i=0;i<k;i++)
    {
        scanf("%d%d",&ro,&co);

        if(rq==ro&&cq>co)
        {
            if(cq-co-1<left)
            left=cq-co-1;
        }
        else if(rq==ro&&co>cq)
        {
            if(co-cq-1<right)
            right=co-cq-1;
        }
        else if(cq==co&&rq<ro)
        {
            if(ro-rq-1<up)
            up=ro-rq-1;
        }
        else if(cq==co&&rq>ro)
        {
            if(rq-ro-1<down)
            down=rq-ro-1;
        }
        else if(ro>rq&&cq>co){
        if((ro-rq)==(cq-co))
        {
            if(ro-rq-1<upleft)
            upleft=ro-rq-1;
        }
        }
        else if(rq>ro&&co<cq){
        if((rq-ro)==(cq-co))
        {
            if(rq-ro-1<downleft)
            downleft=rq-ro-1;
        }
        }
        else if(rq>ro&&co>cq){
        if((rq-ro)==(co-cq))
        {
            if(rq-ro-1<downright)
            downright=rq-ro-1;
        }
        }
        else if(ro>rq&&co>cq){
        if((ro-rq)==(co-cq))
        {
            if(ro-rq-1<upright)
            upright=ro-rq-1;
        }
        }


    }
    printf("%d",up+down+right+left+upright+upleft+downleft+downright);
    return 0;
}
