#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define inf 1e18
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sp(x, y) fixed << setprecision(y) << x;
#define em emplace_back
#define all(x) x.begin(), x.end()
#define sortall(x) sort(all(x))
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

void solve() {
  ll n;
  cin >> n;
  map<int, int> mp;
  int mx = 0;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    mx = max(x, mx);
    mp[x]++;
    ans++;
    if (mp[x] > 2) {
      mp[x]--;
      ans--;
    }
  }
  if (mp[mx] > 1) {
    ans--;
    mp[mx]--;
  }
  cout << ans << nl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it->first << ' ';
    mp[it->first]--;
  }
  for (auto it = mp.rbegin(); it != mp.rend(); it++) {
    if (it -> second)
      cout << it -> first << ' ';
  }
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  /* cin >> test; */
  while (test--) {
    solve();
  }
  return 0;
}

