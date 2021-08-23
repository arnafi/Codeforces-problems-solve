#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b,c=0;
    cin>>b;
    string a;
    cin>>a;
     for(int i=0;i<b;i++)
     {
        if(a[i]==a[i+1])
        {
            c++;
        }
     }
    cout<<c<<endl;
    return 0;
}

