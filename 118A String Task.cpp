#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    cin>>a;
    for(int i=0; i<a.size(); i++)
        {
            a[i]=tolower(a[i]);
        }

    a.erase(remove(a.begin(), a.end(), 'a'), a.end());
    a.erase(remove(a.begin(), a.end(), 'e'), a.end());
    a.erase(remove(a.begin(), a.end(), 'i'), a.end());
    a.erase(remove(a.begin(), a.end(), 'o'), a.end());
    a.erase(remove(a.begin(), a.end(), 'u'), a.end());
    a.erase(remove(a.begin(), a.end(), 'y'), a.end());

    for(int i=0;i<a.size();i++)
    {
        cout<<"."<<a[i];
    }
    return 0;

}
