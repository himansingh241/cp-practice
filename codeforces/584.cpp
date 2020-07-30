#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

string s1, s2;
int n, t;
void solve() {
    cin >> n >> t;
    cin >> s1 >> s2;
    set <char> s;
    for (int i = 0; i < s1.length(); i++)
        s.insert(s1[i]);
    for (int i = 0; i < s2.length(); i++)
        s.insert(s2[i]);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}

