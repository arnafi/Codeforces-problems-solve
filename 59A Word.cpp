#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b=0,c=0;
    string a;
    cin>>a;
    for(int i=0; i<a.size(); i++)
    {
        if(islower(a[i]))
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    for(int i=0; i<a.size(); i++)
    {
        if(b>=c)
        {
            a[i]=tolower(a[i]);
        }
        else if(b<c)
        {
             a[i]=toupper(a[i]);
        }
    }

    cout<<a<<endl;
    return 0;
}


