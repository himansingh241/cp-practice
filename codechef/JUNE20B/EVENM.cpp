#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back


const int maxn = 1e6;

void printMatrix(const vector<vector<int>> &arr, int n) {
    for (int i =0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << arr[i][j] << ' ';
        cout << '\n';
    }
}
int n;
void solve() {
    cin >> n;
    vector<vector<int>> arr(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = 0;
        }
    }
    bool even = true;
    if (n & 1)
        even = 0;
    int initial = 2;
    if (!even)
        initial = 1;
    for (int i = 0; i < n; i++) {
        arr[i][i] = initial;
        int r = i - 1, c = i + 1;
        initial += 2;
        /* cout << r << c << '\n'; */
        while (r >= 0 && c < n) {
            arr[r][c] = initial;
            initial += 2;
            r--;
            c++;
        }
        r = i + 1, c = i - 1;
        while (c >= 0 && r < n) {
            arr[r][c] = initial;
            initial += 2;
            c--;
            r++;
        }
    }
    if (!even)
        initial = 2;
    else
        initial = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 0) {
                arr[i][j] = initial;
                initial += 2;
            }
        }
    }
    printMatrix(arr, n);
}

int main() {
    ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}

