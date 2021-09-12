#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s,t,a;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n>>s;

        a=s/((n/2)+1);
        cout<<a<<endl;
    }
}

