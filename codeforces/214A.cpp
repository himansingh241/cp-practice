#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;


void solve() {
    int n, m;
    cin >> n >> m;
    ll ans = 0;
    for (int a = 0; a * a <= n; a++) {
        for (int b = 0; b * b <= m; b++) {
            if (((a * a) + b == n) & ((b * b) + a == m)) {
                ans++;
            }
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

