#include<bits/stdc++.h>
using namespace std;

int main()
{
    string arry;
    cin>>arry;
    int n=arry.size();
    for(int i=0;i<n;i+=2){
        for(int j=0;j<n-1-i;j+=2){
            if (arry[j]>arry[j+2]){
            swap(arry[j],arry[j+2]);
            }
        }
    }

    cout<<arry<<endl;
    return 0;
}
