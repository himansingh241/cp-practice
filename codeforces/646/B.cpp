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
    string str;
    cin >> str;
    int n = str.size();
    bool flag = 0;
    for (int i = 0; i < n; i++) {
        if (!flag && str[i] == 0) 
            flag = 1;
        if (!flag && str[i] == 1) {
            continue;
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

