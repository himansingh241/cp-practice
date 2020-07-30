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
  ll n, x;
  cin >> n >> x;
  vl a(n);
  ll mx = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    mx = max(mx, a[i]);
  }
  if (x >= mx) {
    cout << n << nl;
    return;
  }
  vl a1, a2;
  for (int i = 0; i < n; i++) {
    if (a[i] >= ceil((double)x / (double)2))
      a1.em(a[i]);
    else
      a2.em(a[i]);
  }
  sortall(a1);
  sortall(a2);
  reverse(all(a2));
  a.clear();
  for (auto it : a1)
    a.em(it);
  for (auto it : a2)
    a.em(it);
  ll ans = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > x)
      ans += ceil(log2((double)a[i] / (double)x)) + 1;
    else
      ans++;
    x = a[i] * 2;
  }
  cout << ans << nl;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
  ll test = 1;
  cin >> test;
  while (test--) {
    solve();
  }
  return 0;
}
