#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,num=0;
    cin>>n;
    int arry[n][3];
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>arry[i][j];
        }
    }
    for(int j=0;j<3;j++)
    {
        for(int i=0;i<n;i++)
        {
            v.push_back(arry[i][j]);
        }
        sum=accumulate(v.begin(),v.end(),0);
        if(sum==0)
        {
            v.clear();
            continue;
        }
        else
        {
            v.clear();
            num++;
        }
    }
    if(num!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}
