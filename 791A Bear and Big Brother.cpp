#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,counter=0;
    cin>>a>>b;
    int i=0;
    while(a<b || a==b)
    {
        counter++;
        a=a*3;
        b=b*2;

        i++;
    }
    cout<<counter<<endl;
    return 0;
}
