#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    string b;
    int num=0;

    cin>>a>>b;

    for(int i=0; i<a.size(); i++)
    {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }

        for(int i=0; i<a.size(); i++)
        {
            if(a[i]>b[i])
            {
                num++;
                break;
            }
            else if(a[i]<b[i])
            {
                num=0;
                break;
            }

        }
    if(a==b)
    {
        cout<<0<<endl;
    }
    else if(num==1)
    {
        cout<<1<<endl;
    }
    else if(num==0)
    {
        cout<<-1<<endl;
    }
    return 0;

}
