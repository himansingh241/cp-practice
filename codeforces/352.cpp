#include<bits/stdc++.h>
using namespace std;

#define ll long long 
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;

int n;
void solve() {
    cin >> n;
    int total5 = 0, total0 = 0;
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        if (temp == 0)
            total0++;
        else
            total5++;
    }
    if (total0 == 0)
        cout << "-1\n";
    else if (total5 < 9)
        cout << "0\n";
    else {
        for (int i = 0; i < ((total5 / 9) * 9); i++)
            cout << "5";
        for (int i = 0; i < total0; i++)
            cout << "0";
        cout << '\n';
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}

