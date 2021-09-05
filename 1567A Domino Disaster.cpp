#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    string ch;
    string ch1="U";
    string ch2="D";
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
        cin>>ch;
        for(int j=0; j<n; j++)
        {
            if(ch[j]=='U')
            {
                ch.replace(j,1,ch2);
            }
            else if(ch[j]=='D')
            {
                ch.replace(j,1,ch1);
            }
        }
        cout<<ch<<endl;

    }

}


