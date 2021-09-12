#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;

        int c = 0, ans = 0;
        for(int i=0;i<s.size();i++) {
            if (s[i] == '0')
            {
                c = 1;
            }
            else if (s[i] != '0' and c == 1)
            {
                ans++;
                c = 0;
            }
        }
        if (s[s.size() - 1] == '0') {ans++;}
        cout << min(ans, 2) << endl;
    }

    return 0;
}

