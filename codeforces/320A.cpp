#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

string str;
void solve() {
    cin >> str;
    bool flag = true;
    ll count = 0;
    for (ll i = 0; i < str.length() && flag; i++) {
        if (str[i] == '1') {
            count = 0;
            continue;
        }
        if (str[i] == '4') {
            if (i == 0)
                flag = false;
            if (str[i - 1] == '1')
                continue;
            if (str[i - 1] == '4') {
                if (str[i - 2] == '1')
                    continue;
                else
                    flag = false;
            }
        }
        if (str[i] != '4' || count > 2)
            flag = false;
    }
    if (flag)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}

