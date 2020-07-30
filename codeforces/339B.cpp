#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

int n, m;

void solve() {
    cin >> n >> m;
    int prev = 1;
    ll ans = 0;
    for (int i = 0; i < m; i++) {
        int temp;
        cin >> temp;
        if (prev > temp) {
            ans += n - prev;
            ans += temp;
        }
        else
            ans += temp - prev;
        prev = temp;
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

