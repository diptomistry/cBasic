#include<stdio.h>

int main()
{
    int h,m,t,day,time;
    scanf("%d",&t);
    while(t--)
    {
        time=0;
        scanf("%d %d",&h,&m);
        day=24*60;
        time=h*60+m;
        printf("%d\n",day-time);
    }
    return 0;
}
