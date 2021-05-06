#include<stdio.h>

int team()
{
    int n,arry[5],i;
    int a=0,b=0;
    scanf("%d",&n);

    while(n--)
    {
        for(i=0; i<3 ; i++)
        {

            scanf("%d",&arry[i]);


        }
        a=0;
        for(i=0; i<3; i++)
        {
            if(arry[i]==1)a++;
        }


        if(a>=2)b++;

    }
    printf("%d\n",b);
}

int main()
{
    team();
}
