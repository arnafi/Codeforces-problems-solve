#include <bits/stdc++.h>
using namespace std;
int x, num;
int main() {
    cin >> x;
    num = x / 5;
    if (x % 5 > 0) {
        num++;
    }
    cout << num;
}
