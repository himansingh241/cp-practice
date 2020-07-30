#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back

const int maxn = 1e6;


void solve() {
    int x, n;
    cin >> n >> x;
    vector<int> arr(n);
    for (auto &it: arr)
        cin >> it;
    for (int i = 0; i < n; i++) {
        int sm = 0;
        for (int j = i; j < n; j++) {
            sm += arr[j];
            if (sm & 1) {
                if (x == (j - i) + 1) {
                    cout << "Yes\n";
                    return;
                }
            }
        }
    }
    cout << "No\n";
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

