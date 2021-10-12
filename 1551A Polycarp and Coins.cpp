#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,c1,c2;
    cin>>t;
    while(t--)
    {
        cin>>n;
        c2=n/3;
        if(c2+c2*2==n)
        {
            c1=c2;
            cout<<c1<<" "<<c2<<endl;
        }
        else
        {
            c1=c2+1;
            if(c1+c2*2==n)
            {
                cout<<c1<<" "<<c2<<endl;
            }
            else
            {
                cout<<c2<<" "<<c1<<endl;
            }

        }

    }
}
