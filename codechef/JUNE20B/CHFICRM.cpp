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
    map<int, int> mp;
    vector<int> arr(n);
    for (auto &it: arr)
        cin >> it;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
        if (arr[i] == 5)
            continue;
        if (arr[i] == 10 && mp[5]) 
            mp[5]--;
        else if (arr[i] == 15) {
            if (mp[10]) {
                mp[10]--;
                continue;
            }
            if (mp[5] >= 2) {
                mp[5] -= 2;
            }
            else {
                cout << "NO\n";
                return;
            }
        }
        else {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
