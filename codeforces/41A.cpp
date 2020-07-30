#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

string str1, str2;
bool solve() {
    cin >> str1;
    cin >> str2;
    if (str1.length() != str2.length())
        return 0;
    int n = str1.length();
    for (int i = 0; i < n; i++) {
        if (str1[i] != str2[n - i - 1])
            return 0;
    }
    return 1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    if (solve()) {
        cout << "YES\n";
    }
    else {
        cout << "NO\n";
    }
    return 0;
}

