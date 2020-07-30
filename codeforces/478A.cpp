#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;


void solve() {
    int sm = 0;
    for (int i = 0; i < 5; i++) {
        int tmp;
        cin >> tmp;
        sm += tmp;
    }
    if (sm % 5 != 0 || sm == 0) 
        cout << -1;
    else 
        cout << (sm / 5);
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}

