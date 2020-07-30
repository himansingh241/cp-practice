#include<bits/stdc++.h>
#include <numeric>
using namespace std;

#define ll long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

int p;
void solve() {
    vector<int> arr(5);
    for (int i = 0; i < 5; i++)
        cin >> arr[i];
    cin >> p;
    ll sum = accumulate(arr.begin(), arr.end(), (ll)0);
    if (sum * p <= 24 * 5)
        cout << "No\n";
    else
        cout << "Yes\n";
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

