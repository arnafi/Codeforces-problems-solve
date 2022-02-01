#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        int a=0,b=0;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='1')
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        if(a>b)
        {
            cout<<b<<endl;
        }
        else if(b>a)
        {
            cout<<a<<endl;
        }
        else if(a==b)
        {
            a=a-1;
            cout<<a<<endl;
        }
    }
}
