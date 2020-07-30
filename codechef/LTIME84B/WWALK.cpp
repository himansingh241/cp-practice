#include<bits/stdc++.h>
#include <numeric>
using namespace std;

#define ll long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

int n;
vector<int> arr, brr;
void solve() {
    cin >> n;
    arr.resize(n);
    brr.resize(n);
    for (auto &it: arr)
        cin >> it;
    for (auto &it: brr)
        cin >> it;
    ll ans = 0;
    int x = 0, y = 0;
    for (int i = 0; i < n; i++) {
        x += arr[i];
        y += brr[i];
        if ((arr[i] == brr[i]) & (x == y)) {
            ans += arr[i];
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
    while (test--)
        solve();

    return 0;
}

