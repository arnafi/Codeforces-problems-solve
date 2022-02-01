#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int a,b,ab;
        cin>>n;
        if(n%7==0)
        {
            cout<<n<<endl;
        }
        else if(n%7!=0)
        {
            a=n%7;
            b=7-a;
            ab=n%10;
            if(ab+b<10)
            {
                n=n+b;
            }
            else
            {
                n=n-a;
            }
            cout<<n<<endl;
        }
    }
}
