#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define gc getchar_unlocked
#define fo(i, n) for (i = 0; i < n; i++)
#define Fo(i, k, n) for (i = k; k < n ? i < n : i > n; k < n ? i += 1 : i -= 1)
#define ll long long
#define inf 1e18
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sp(x, y) fixed << setprecision(y) << x;
#define em emplace_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
#define tr(it, a) for (auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
#define nl '\n'

typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;

const int maxn = 1e6;
const int mod = 1e9 + 7;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  cin >> test;
  while (test--) {
    ll n, i, j;
    cin >> n;
    vi a(n);
    bool flag = 1;
    map<int, int> mp;
    fo(i, n) {
      cin >> a[i];
      mp[a[i]]++;
      if (mp[a[i]] > 2) {
        flag = false;
      }
    }
    int mx = *max_element(all(a));
    if (!flag || mp[mx] > 1) {
      cout << "NO\n";
      continue;
    }
    sortall(a);
    fo(i, n) {
      if (i != 0 && a[i] == a[i - 1]) {
        continue;
      }
      if (mp[a[i]]) {
        cout << a[i] << ' ';
        mp[a[i]]--;
      }
    }
    Fo(i, n - 1, 0) {
      if (mp[a[i]]) {
        cout << a[i] << ' ';
        mp[a[i]]--;
      }
    }
    cout << nl;
  }
  return 0;
}

