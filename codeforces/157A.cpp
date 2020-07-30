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
    vector<vector<int> > arr(n, vector<int> (n));
    vector<int> row(n), col(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            row[i] += arr[i][j];
            col[j] += arr[i][j];
        }
    }
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (col[j] > row[i]) {
                count++;
            }
        }
    }
    cout << count << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    solve();
    return 0;
}

