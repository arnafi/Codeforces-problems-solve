#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int c,d,k,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>c>>d;
        if(c==0 && d==0)
        {
            cout<<0<<endl;
        }
        else if(c==d)
        {
            cout<<1<<endl;
        }
        else if((c+d)%2==0)
        {
            cout<<2<<endl;
        }
        else if((c+d)%2!=0)
        {
            cout<<-1<<endl;
        }

    }


}
