#include<bits/stdc++.h>
using namespace std;

int main()
{
    string ch;
    int num=0;
    cin>>ch;

    for(int i=1; i<ch.size(); i++)
    {

        if(islower(ch[i]))
        {
            num++;
        }
    }

    if(islower(ch[0]) && num==0)
    {
        ch[0]=toupper(ch[0]);
        for(int i=1; i<ch.size(); i++)
        {
            ch[i]=tolower(ch[i]);
        }
        cout<<ch<<endl;
    }
    else if(isupper(ch[0]) && num==0)
    {
        for(int i=0; i<ch.size(); i++)
        {
            ch[i]=tolower(ch[i]);
        }
        cout<<ch<<endl;
    }
    else
    {
        cout<<ch<<endl;
    }
    return 0;
}

