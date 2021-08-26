#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long t,l,r;
   cin>>t;
   while(t--){
        cin>>l>>r;
        if(r/2<l) {cout<<r%l<<endl; continue;}
        (r%2==0)? cout<<(r/2)-1<<endl : cout<<r/2<<endl;
   }
}

