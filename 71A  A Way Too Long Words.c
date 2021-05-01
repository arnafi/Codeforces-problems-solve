#include <stdio.h>
#include <string.h>

int math()
{

    char s[1001];
    int a,count;
    scanf("%d",&a);
    for(int k=1; k<=a; k++)
    {
        scanf("%s",&s);
        count=strlen(s);
        if(count>10)

        {
            printf("%c%d%c\n", s[0],count-2,s[count-1]);
        }
        else
        {
            printf("%s\n",s);
        }
    }
}


int main()
{
    math();
    return 0;
}
