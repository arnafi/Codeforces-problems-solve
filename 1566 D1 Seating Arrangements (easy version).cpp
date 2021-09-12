#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll arr[m + 3];
        for (int i = 0; i < m; i++)
        {
            cin >> arr[i];
        }
        vector<ll> v;
        v.push_back(arr[0]);
        ll res = 0;
        for (int i = 0; i < m; i++)
        {
            ll cnt = 0;
            if (i == 0)
            {
                continue;
            }
            for (int j = 0; j < v.size(); j++)
            {
                if (v[j] < arr[i]){
                    cnt++;
                }
            }
            v.push_back(arr[i]);
            res += cnt;
        }
        cout << res << endl;
    }
    return 0;
}
