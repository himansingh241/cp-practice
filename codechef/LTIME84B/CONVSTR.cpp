#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back

const int maxn = 1e6;


int n;
string a, b;

void solve() {
    cin >> n;
    cin >> a >> b;
    vector<vector<int> > ans;
    for (int i = 0; i < n; i++) {
        if (b[i] > a[i]) {
            cout << -1 << '\n';
            return;
        }
    }
    for (char x = 'z'; x >= 'a'; x--) {
        vector<int> pos;
        bool flag = false;
        for (int i = 0; i < n; i++) {
            if (b[i] == x && a[i] != x)
                pos.pb(i);
        }
        if (!flag && !pos.empty()) {
            for (int i = 0; i < n; i++) {
                if (a[i] == x) {
                    flag = true;
                    pos.pb(i);
                }
            }
        }
        if (!flag && !pos.empty()) {
            cout << -1 << '\n';
            return;
        }
        if (!pos.empty())
            ans.pb(pos);
        for (auto i: pos)
            a[i] = x;
    }
    cout << ans.size() << '\n';
    for (auto it: ans) {
        cout << it.size() << ' ';
        for (auto iit: it)
            cout << iit << ' ';
        cout << '\n';
    }

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

