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
    string s;
    cin >> s;
    int ans = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'x' && s[i + 1] == 'y') {
            ans++;
            i++;
        }
        else if (s[i] == 'y' && s[i + 1] == 'x') {
            ans++;
            i++;
        }
    }
    cout << ans << '\n';
}

int main() {
    ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}

