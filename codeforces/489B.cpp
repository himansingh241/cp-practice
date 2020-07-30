#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back


const int maxn = 1e6;

int n, m;
vector<int> arr, brr;
void solve() {
    cin >> n;
    arr.resize(n);
    for (auto &it: arr)
        cin >> it;
    cin >> m;
    brr.resize(m);
    map<int, bool> mp;
    for (auto &it: brr) {
        cin >> it;
    }
    sort(brr.begin(), brr.end());
    sort(arr.begin(), arr.end());
    ll ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (brr[j] > arr[i] + 1)
                break;
            if (!mp[j] && (abs(arr[i] - brr[j]) <= 1)) {
                ans++;
                mp[j] = 1;
                break;
            }
        }
    }
    cout << ans;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}

