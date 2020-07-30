#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

int n;
void solve() {
    cin >> n;
    string str;
    map<string, int> mp;
    string ans;
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> str;
        mp[str]++;
        if (mp[str] > mx) {
            mx = mp[str];
            ans = str;
        }
    }
    cout << ans << '\n';
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}

