#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back


const int maxn = 1e6;

ll ts;
void solve() {
    cin >> ts;
    if (ts & 1) {
        cout << (ts / 2) << '\n';
        return;
    }
    if (ceil(log2(ts)) == floor(log2(ts))) {
        cout << 0 << '\n';
        return;
    }
    while (ts % 2 == 0)
        ts >>= 1;
    cout << (ts / 2) << '\n';
}

int main() {
    ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}

