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
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &it: arr)
        cin >> it;
    ll a1 = accumulate(arr.begin(), arr.end(), (ll)0);
    ll a2 = 0;
    for (auto &it: arr) {
        if (it > k)
            a2 += k;
        else
            a2 += it;
    }
    cout << (a1 - a2) << '\n';
}

int main() {
    ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}

