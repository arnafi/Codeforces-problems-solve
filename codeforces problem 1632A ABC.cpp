#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string a;
        cin>>a;
        if(n>2 || a=="00" || a=="11")
        {
            cout<<"NO\n"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
