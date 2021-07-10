#include<bits/stdc++.h>
using namespace std;

void bananas(int k,int n,int w,int a)
{   int m;
    int x=0;
    for(int i=1;i<=w;i++)
    {
       x=x+i;
    }
    a=x*k;
    if(a>n)
    {
        m=a-n;
        cout<<m<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}

int main()
{
    int k,n,a,w;
    cin>>k>>n>>w;
    bananas(k,n,w,a);

}
