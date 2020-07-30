#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;

const int maxn = 1e6;


int n;
string a, b;

void solve() {
    cin >> n;
    cin >> a >> b;
    vector<int> ansa, ansb;
    bool flaga = false, flagb = false;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            if (a[i] < b[i]) {
                cout <<  -1 << '\n';
                return;
            }
            if (b[i] == 'a') {
                ansa.push_back(i);
                if (flaga)
                    continue;
                int x = 0;
                for (x = 0; x < n; x++) {
                    if (a[x] == 'a') {

                        ansa.push_back(x);
                        break;
                    }
                }
                if (x == n) {
                    cout << -1 << '\n';
                    return;
                }
                flaga = true;
            }
            else if (b[i] == 'b') {
                ansb.push_back(i);
                if (flagb)
                    continue;
                int x = 0;
                for (x = 0; x < n; x++) {
                    if (a[x] == 'b') {
                        ansb.push_back(x);
                        break;
                    }
                }
                if (x == n) {
                    cout << -1 << '\n';
                    return;
                }
                flagb = true;
            }
        }
    }
    int z = 0;
    if (ansa.size()) {
        z++;
    }
    if (ansb.size()) {
        z++;
    }
    cout << z << '\n';
    if (ansa.size()) {
        cout << ansa.size() << ' ';
        for (auto it: ansa) {
            cout << it << ' ';
        }
        cout << '\n';
    }
    if (ansb.size()) {
        cout << ansb.size() << ' ';
        for (auto it: ansb) {
            cout << it << ' ';
        }
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

