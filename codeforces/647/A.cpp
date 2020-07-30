#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back


const int maxn = 1e6;
void solve() {
    ll a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 0 << '\n';
        return;
    }
    if (max(a, b) % min(a, b) != 0) {
        cout << -1 << '\n';
        return;
    }
    ll ans = 0;
    ll a1 = max(a, b);
    ll b1 = min(a, b);
    while (b1 < a1) {
        b1 *= 2;
    }
    if (a1 != b1) {
        cout << -1 << '\n';
        return;
    }
    a1 = max(a, b);
    b1 = min(a, b);
    ll x = 8;
    while (a1 != b1 && x > 0) {
        if (a1 % x == 0) {
            ans++;
            a1 /= x;
        }
        else {
            x /= 2;
        }
    }
    cout << ans << '\n';
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test;
    cin >> test;
    while (test--) {
        solve();
    }
    return 0;
}

