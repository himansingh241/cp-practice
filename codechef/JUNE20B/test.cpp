#include<bits/stdc++.h>
using namespace std;

#define ll unsigned long long
#define inf 1e18
#define mod 1e9+7
#define w(x) int x; cin >> x; while(x--)
#define sp(x, y) fixed << setprecision(y) << x;
#define pb push_back


const int maxn = 1e6;


int main() {
    ll test;
    cin >> test;
    while (test--) {
        ll n; 
        cin >> n;
        ll temp = (n >> 1);
        (n & 1) ? cout << temp : cout << --temp;
        cout << '\n';
    }
    return 0;
}

