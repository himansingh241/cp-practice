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
    int n;
    cin >> n;
    vector<int> arr(n);
    set<int> s1;
    for (auto &it: arr) {
        cin >> it;
        s1.insert(it);
    }
    int mx = *max_element(arr.begin(), arr.end());
    for (int i = 1; i <= 1024; i++) {
        int x = 0;
        set<int> s2;
        for (int j = 0; j < n; j++) {
            int x = arr[j] ^ i;
            s2.insert(x);
        }
        bool flag = true;
        if (s1 == s2) {
            cout << i << '\n';
            return;
        }
    }
    cout << -1 << '\n';
}

int main() {
    int test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}

