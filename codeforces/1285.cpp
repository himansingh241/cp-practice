#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

void solve() {
    int n;
    cin >> n;
    vector<ll> arr(n);
    for (auto &it: arr)
        cin >> it;
    ll sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
        if (sum <= 0) {
            cout << "NO\n";
            return;
        }
    }
    sum = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum += arr[i];
        if (sum <= 0) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int test;
    cin >> test;
    while (test) {
        solve();
        test--;
    }
    return 0;
}

