#include<stdio.h>
#include<string.h>


int gender()
{
    char arry[101];
    int c=0,i,j,k,l,n;
    gets(arry);
    l=strlen(arry);
    for(i=0; i<l; i++)
    {
        if(arry[i]!=0){
        for(j=i+1;j<l; j++)
        {
            if(arry[i]==arry[j])
            {
                c++;
                arry[j]=0;
            }
        }
    }
    }
    n=l-c;
    if(n%2==0)
    {
        printf("CHAT WITH HER!\n");
    }
    else
    {
        printf("IGNORE HIM!\n");
    }

}


int main()
{
    gender();
    return 0;
}
