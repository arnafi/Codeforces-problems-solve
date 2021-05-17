#include<stdio.h>
#include<math.h>

int year()
{
    int year,a,b,c,d;
    scanf("%d",&year);
    for(;;)
    {
        year++;
        a=year/1000;
        b=(year/100)%10;
        c=(year/10)%10;
        d=(year%10);

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d)
        {
            printf("%d",year);
            break;
        }
    }
}


int main()
{
    year();
    return 0;
}
